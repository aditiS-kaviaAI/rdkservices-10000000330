#include "RBusDiagnostics.h"

namespace WPEFramework {
namespace {

static const uint8_t kApiVersionMajor = 1;
static const uint8_t kApiVersionMinor = 0;
static const uint8_t kApiVersionPatch = 0;

static const uint32_t kReporterUnavailableError = 0xFFFFFFFE;
static const uint32_t kProviderNotFoundError = 0xFFFFFFFD;
static const uint32_t kInvalidParametersError = Core::ERROR_BAD_REQUEST;
static const uint32_t kMaximumResultLimit = 128;
static const uint32_t kMaximumProviderIdentifierLength = 256;

static Plugin::Metadata<Plugin::RBusDiagnostics> metadata(
    kApiVersionMajor, kApiVersionMinor, kApiVersionPatch, {}, {}, {});

} // namespace

namespace Plugin {

SERVICE_REGISTRATION(
    RBusDiagnostics,
    kApiVersionMajor,
    kApiVersionMinor,
    kApiVersionPatch);

RBusDiagnostics::RBusDiagnostics()
    : PluginHost::JSONRPC()
    , nextRequestId_(1)
    , initialized_(false)
{
    Register("getGlobalMetrics", &RBusDiagnostics::GetGlobalMetrics, this);
    Register("getProviderMetrics", &RBusDiagnostics::GetProviderMetrics, this);
    Register("getAllProviders", &RBusDiagnostics::GetAllProviders, this);
    Register("getSlowRequests", &RBusDiagnostics::GetSlowRequests, this);
    Register("resetMetrics", &RBusDiagnostics::ResetMetrics, this);
}

RBusDiagnostics::~RBusDiagnostics()
{
    Unregister("getGlobalMetrics");
    Unregister("getProviderMetrics");
    Unregister("getAllProviders");
    Unregister("getSlowRequests");
    Unregister("resetMetrics");
}

const string RBusDiagnostics::Initialize(PluginHost::IShell* service)
{
    if (service == nullptr) {
        return _T("RBusDiagnostics requires a valid Thunder shell");
    }

    initialized_ = true;
    return string();
}

void RBusDiagnostics::Deinitialize(PluginHost::IShell* service)
{
    ASSERT(service != nullptr);
    initialized_ = false;
}

string RBusDiagnostics::Information() const
{
    return string();
}

uint32_t RBusDiagnostics::ValidateEmptyParameters(const JsonObject& parameters) const
{
    return parameters.Length() == 0 ? Core::ERROR_NONE : kInvalidParametersError;
}

uint32_t RBusDiagnostics::ValidateLimit(
    const JsonObject& parameters,
    uint32_t* limit) const
{
    if (limit == nullptr || !parameters.HasLabel("limit") ||
        parameters["limit"].Content() != Core::JSON::Variant::type::NUMBER) {
        return kInvalidParametersError;
    }

    const uint32_t requestedLimit = parameters["limit"].Number();
    if (requestedLimit == 0 || requestedLimit > kMaximumResultLimit) {
        return kInvalidParametersError;
    }

    *limit = requestedLimit;
    return Core::ERROR_NONE;
}

uint32_t RBusDiagnostics::RequestReporter(
    ReporterClient::RequestType requestType,
    const std::string& provider,
    uint16_t limit,
    JsonObject& response)
{
    ReporterClient::Reply reply = {};
    const uint32_t result = reporterClient_.Request(
        requestType,
        nextRequestId_++,
        provider,
        limit,
        &reply);

    if (result != Core::ERROR_NONE) {
        response["error"] = "REPORTER_UNAVAILABLE";
        response["code"] = -32070;
        return kReporterUnavailableError;
    }

    if (reply.status == ReporterClient::ReplyStatus::ProviderNotFound) {
        response["error"] = "PROVIDER_NOT_FOUND";
        response["code"] = -32071;
        return kProviderNotFoundError;
    }

    // The reporter owns serialization from its immutable bounded snapshot.
    // The plugin intentionally neither caches nor re-aggregates the payload.
    response["reporterPayload"] = reply.payload;
    return Core::ERROR_NONE;
}

uint32_t RBusDiagnostics::GetGlobalMetrics(
    const JsonObject& parameters,
    JsonObject& response)
{
    if (ValidateEmptyParameters(parameters) != Core::ERROR_NONE) {
        return kInvalidParametersError;
    }

    return RequestReporter(ReporterClient::RequestType::Snapshot, string(), 0, response);
}

uint32_t RBusDiagnostics::GetProviderMetrics(
    const JsonObject& parameters,
    JsonObject& response)
{
    if (!parameters.HasLabel("provider") ||
        parameters["provider"].Content() != Core::JSON::Variant::type::STRING ||
        parameters["provider"].String().empty() ||
        parameters["provider"].String().length() > kMaximumProviderIdentifierLength) {
        return kInvalidParametersError;
    }

    return RequestReporter(
        ReporterClient::RequestType::ProviderMetrics,
        parameters["provider"].String(),
        0,
        response);
}

uint32_t RBusDiagnostics::GetAllProviders(
    const JsonObject& parameters,
    JsonObject& response)
{
    uint32_t limit = 0;
    if (ValidateLimit(parameters, &limit) != Core::ERROR_NONE) {
        return kInvalidParametersError;
    }

    return RequestReporter(
        ReporterClient::RequestType::ProviderList,
        string(),
        static_cast<uint16_t>(limit),
        response);
}

uint32_t RBusDiagnostics::GetSlowRequests(
    const JsonObject& parameters,
    JsonObject& response)
{
    uint32_t limit = 0;
    if (ValidateLimit(parameters, &limit) != Core::ERROR_NONE) {
        return kInvalidParametersError;
    }

    return RequestReporter(
        ReporterClient::RequestType::SlowRequestList,
        string(),
        static_cast<uint16_t>(limit),
        response);
}

uint32_t RBusDiagnostics::ResetMetrics(
    const JsonObject& parameters,
    JsonObject& response)
{
    if (ValidateEmptyParameters(parameters) != Core::ERROR_NONE) {
        return kInvalidParametersError;
    }

    return RequestReporter(ReporterClient::RequestType::Reset, string(), 0, response);
}

} // namespace Plugin
} // namespace WPEFramework
