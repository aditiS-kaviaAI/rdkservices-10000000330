/*
 * Copyright 2026 RDK Management
 *
 * Licensed under the Apache License, Version 2.0.
 */

#include "RBusDiagnostics.h"

#include <cstring>
#include <vector>

#include "rbus_diagnostics_private.h"

namespace {

constexpr uint32_t kApiVersionMajor = 1;
constexpr uint32_t kApiVersionMinor = 0;
constexpr uint32_t kApiVersionPatch = 0;

const char* const kStatusOk = "OK";
const char* const kStatusDisabled = "DISABLED";
const char* const kStatusUnavailable = "UNAVAILABLE";
const char* const kStatusAbiMismatch = "ABI_MISMATCH";
const char* const kStatusNotFound = "NOT_FOUND";
const char* const kStatusLimitInvalid = "LIMIT_INVALID";
const char* const kStatusInvalidRequest = "INVALID_REQUEST";

bool IsValidIdentifier(const WPEFramework::string& identifier)
{
    if (identifier.empty() || identifier.length() >= RBUS_DIAGNOSTICS_MAX_IDENTIFIER_LENGTH) {
        return false;
    }

    for (const char character : identifier) {
        if (character < 0x21 || character > 0x7E) {
            return false;
        }
    }

    return true;
}

const char* MapStatus(const rbus_diagnostics_status_t status)
{
    switch (status) {
    case RBUS_DIAGNOSTICS_STATUS_OK:
        return kStatusOk;
    case RBUS_DIAGNOSTICS_STATUS_DISABLED:
        return kStatusDisabled;
    case RBUS_DIAGNOSTICS_STATUS_NOT_FOUND:
        return kStatusNotFound;
    case RBUS_DIAGNOSTICS_STATUS_LIMIT_INVALID:
        return kStatusLimitInvalid;
    case RBUS_DIAGNOSTICS_STATUS_ABI_MISMATCH:
        return kStatusAbiMismatch;
    case RBUS_DIAGNOSTICS_STATUS_UNAVAILABLE:
    default:
        return kStatusUnavailable;
    }
}

bool IsCompatibleAbi()
{
    uint32_t major = 0;
    uint32_t minor = 0;

    rbusDiagnostics_GetAbiVersion(&major, &minor);
    return major == RBUS_DIAGNOSTICS_ABI_MAJOR
        && minor >= RBUS_DIAGNOSTICS_ABI_MINOR;
}

void AddAggregate(const rbus_diagnostics_global_snapshot_t& aggregate,
    WPEFramework::JsonObject& response)
{
    response["requestCount"] = aggregate.request_count;
    response["successCount"] = aggregate.success_count;
    response["errorCount"] = aggregate.error_count;
    response["timeoutCount"] = aggregate.timeout_count;
    response["epoch"] = aggregate.epoch;

    if (aggregate.latency_available) {
        response["minLatencyUs"] = aggregate.min_latency_us;
        response["maxLatencyUs"] = aggregate.max_latency_us;
        response["averageLatencyUs"] = aggregate.average_latency_us;
    } else {
        response["minLatencyUs"] = nullptr;
        response["maxLatencyUs"] = nullptr;
        response["averageLatencyUs"] = nullptr;
    }

    if (aggregate.percentiles_available) {
        response["p50LatencyUs"] = aggregate.p50_latency_us;
        response["p90LatencyUs"] = aggregate.p90_latency_us;
        response["p95LatencyUs"] = aggregate.p95_latency_us;
        response["p99LatencyUs"] = aggregate.p99_latency_us;
    } else {
        response["p50LatencyUs"] = nullptr;
        response["p90LatencyUs"] = nullptr;
        response["p95LatencyUs"] = nullptr;
        response["p99LatencyUs"] = nullptr;
    }
}

void SetStatus(WPEFramework::JsonObject& response, const char* status)
{
    response["status"] = status;
    response["success"] = (std::strcmp(status, kStatusOk) == 0);
}

bool ReadLimit(const WPEFramework::JsonObject& parameters, uint32_t maximum,
    uint32_t& limit, WPEFramework::JsonObject& response)
{
    limit = maximum;
    if (!parameters.HasLabel("limit")) {
        return true;
    }

    if (parameters["limit"].Content() != WPEFramework::Core::JSON::Variant::type::NUMBER) {
        SetStatus(response, kStatusInvalidRequest);
        return false;
    }

    limit = parameters["limit"].Number();
    if (limit == 0 || limit > maximum) {
        SetStatus(response, kStatusLimitInvalid);
        return false;
    }

    return true;
}

} // namespace

namespace WPEFramework {
namespace Plugin {

namespace {
static Plugin::Metadata<RBusDiagnostics> metadata(
    kApiVersionMajor, kApiVersionMinor, kApiVersionPatch, {}, {}, {});
}

SERVICE_REGISTRATION(RBusDiagnostics, kApiVersionMajor, kApiVersionMinor, kApiVersionPatch);

RBusDiagnostics::RBusDiagnostics()
    : PluginHost::JSONRPC()
{
    Register("getGlobalMetrics", &RBusDiagnostics::getGlobalMetrics, this);
    Register("getProviderMetrics", &RBusDiagnostics::getProviderMetrics, this);
    Register("getAllProviders", &RBusDiagnostics::getAllProviders, this);
    Register("getSlowRequests", &RBusDiagnostics::getSlowRequests, this);
    Register("resetMetrics", &RBusDiagnostics::resetMetrics, this);
    Register("getConfiguration", &RBusDiagnostics::getConfiguration, this);
    Register("setConfiguration", &RBusDiagnostics::setConfiguration, this);
}

RBusDiagnostics::~RBusDiagnostics()
{
    Unregister("getGlobalMetrics");
    Unregister("getProviderMetrics");
    Unregister("getAllProviders");
    Unregister("getSlowRequests");
    Unregister("resetMetrics");
    Unregister("getConfiguration");
    Unregister("setConfiguration");
}

const string RBusDiagnostics::Initialize(PluginHost::IShell* /* service */)
{
    return string();
}

void RBusDiagnostics::Deinitialize(PluginHost::IShell* /* service */)
{
}

string RBusDiagnostics::Information() const
{
    return string();
}

uint32_t RBusDiagnostics::getGlobalMetrics(const JsonObject& /* parameters */,
    JsonObject& response)
{
    if (!IsCompatibleAbi()) {
        SetStatus(response, kStatusAbiMismatch);
        return Core::ERROR_NONE;
    }

    rbus_diagnostics_global_snapshot_t snapshot {};
    SetStatus(response, MapStatus(rbusDiagnostics_GetGlobalSnapshot(&snapshot)));
    if (response["success"].Boolean()) {
        AddAggregate(snapshot, response);
    }
    return Core::ERROR_NONE;
}

uint32_t RBusDiagnostics::getProviderMetrics(const JsonObject& parameters,
    JsonObject& response)
{
    if (!parameters.HasLabel("provider")
        || parameters["provider"].Content() != Core::JSON::Variant::type::STRING
        || !IsValidIdentifier(parameters["provider"].String())) {
        SetStatus(response, kStatusInvalidRequest);
        return Core::ERROR_NONE;
    }

    if (!IsCompatibleAbi()) {
        SetStatus(response, kStatusAbiMismatch);
        return Core::ERROR_NONE;
    }

    rbus_diagnostics_provider_snapshot_t snapshot {};
    SetStatus(response, MapStatus(rbusDiagnostics_GetProviderSnapshot(
        parameters["provider"].String().c_str(), &snapshot)));
    if (response["success"].Boolean()) {
        response["provider"] = snapshot.provider;
        response["identifierTruncated"] = snapshot.identifier_truncated;
        JsonObject aggregate;
        AddAggregate(snapshot.aggregate, aggregate);
        response["metrics"] = aggregate;
    }
    return Core::ERROR_NONE;
}

uint32_t RBusDiagnostics::getAllProviders(const JsonObject& parameters,
    JsonObject& response)
{
    uint32_t limit = 0;
    if (!ReadLimit(parameters, RBUS_DIAGNOSTICS_MAX_PROVIDERS, limit, response)) {
        return Core::ERROR_NONE;
    }
    if (!IsCompatibleAbi()) {
        SetStatus(response, kStatusAbiMismatch);
        return Core::ERROR_NONE;
    }

    std::vector<rbus_diagnostics_provider_snapshot_t> snapshots(limit);
    uint32_t count = 0;
    const rbus_diagnostics_status_t status = rbusDiagnostics_ListProviders(
        limit, snapshots.data(), limit, &count);
    SetStatus(response, MapStatus(status));

    if (status == RBUS_DIAGNOSTICS_STATUS_OK) {
        JsonArray providers;
        for (uint32_t index = 0; index < count; ++index) {
            JsonObject provider;
            provider["provider"] = snapshots[index].provider;
            provider["identifierTruncated"] = snapshots[index].identifier_truncated;
            JsonObject aggregate;
            AddAggregate(snapshots[index].aggregate, aggregate);
            provider["metrics"] = aggregate;
            providers.Add(provider);
        }
        response["providers"] = providers;
    }
    return Core::ERROR_NONE;
}

uint32_t RBusDiagnostics::getSlowRequests(const JsonObject& parameters,
    JsonObject& response)
{
    uint32_t limit = 0;
    if (!ReadLimit(parameters, RBUS_DIAGNOSTICS_MAX_SLOW_REQUESTS, limit, response)) {
        return Core::ERROR_NONE;
    }
    if (!IsCompatibleAbi()) {
        SetStatus(response, kStatusAbiMismatch);
        return Core::ERROR_NONE;
    }

    std::vector<rbus_diagnostics_slow_request_snapshot_t> snapshots(limit);
    uint32_t count = 0;
    const rbus_diagnostics_status_t status = rbusDiagnostics_ListSlowRequests(
        limit, snapshots.data(), limit, &count);
    SetStatus(response, MapStatus(status));

    if (status == RBUS_DIAGNOSTICS_STATUS_OK) {
        JsonArray requests;
        for (uint32_t index = 0; index < count; ++index) {
            JsonObject request;
            request["operation"] = snapshots[index].operation;
            request["outcome"] = snapshots[index].outcome;
            request["operationName"] = snapshots[index].operation_name;
            request["providerName"] = snapshots[index].provider_name;
            request["operationNameTruncated"] = snapshots[index].operation_name_truncated;
            request["providerNameTruncated"] = snapshots[index].provider_name_truncated;
            request["latencyUs"] = snapshots[index].latency_us;
            request["completedEpochMs"] = snapshots[index].completed_epoch_ms;
            request["epoch"] = snapshots[index].epoch;
            requests.Add(request);
        }
        response["requests"] = requests;
    }
    return Core::ERROR_NONE;
}

uint32_t RBusDiagnostics::resetMetrics(const JsonObject& /* parameters */,
    JsonObject& response)
{
    if (!IsCompatibleAbi()) {
        SetStatus(response, kStatusAbiMismatch);
        return Core::ERROR_NONE;
    }

    SetStatus(response, MapStatus(rbusDiagnostics_Reset()));
    return Core::ERROR_NONE;
}

uint32_t RBusDiagnostics::getConfiguration(const JsonObject& /* parameters */,
    JsonObject& response)
{
    if (!IsCompatibleAbi()) {
        SetStatus(response, kStatusAbiMismatch);
        return Core::ERROR_NONE;
    }

    rbus_diagnostics_configuration_t configuration {};
    const rbus_diagnostics_status_t status =
        rbusDiagnostics_GetConfiguration(&configuration);
    SetStatus(response, MapStatus(status));
    if (status == RBUS_DIAGNOSTICS_STATUS_OK) {
        response["enabled"] = configuration.enabled;
        response["slowRequestThresholdUs"] = configuration.slow_request_threshold_us;
    }
    return Core::ERROR_NONE;
}

uint32_t RBusDiagnostics::setConfiguration(const JsonObject& parameters,
    JsonObject& response)
{
    if (!parameters.HasLabel("enabled")
        || parameters["enabled"].Content() != Core::JSON::Variant::type::BOOLEAN
        || !parameters.HasLabel("slowRequestThresholdUs")
        || parameters["slowRequestThresholdUs"].Content()
            != Core::JSON::Variant::type::NUMBER
        || parameters["slowRequestThresholdUs"].Number() == 0) {
        SetStatus(response, kStatusInvalidRequest);
        return Core::ERROR_NONE;
    }

    if (!IsCompatibleAbi()) {
        SetStatus(response, kStatusAbiMismatch);
        return Core::ERROR_NONE;
    }

    rbus_diagnostics_configuration_t configuration {};
    configuration.enabled = parameters["enabled"].Boolean();
    configuration.slow_request_threshold_us =
        parameters["slowRequestThresholdUs"].Number();
    SetStatus(response, MapStatus(
        rbusDiagnostics_SetConfiguration(&configuration)));
    return Core::ERROR_NONE;
}

} // namespace Plugin
} // namespace WPEFramework
