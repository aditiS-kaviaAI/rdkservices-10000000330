#include "Module.h"

#include <arpa/inet.h>
#include <cerrno>
#include <cstring>
#include <poll.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

namespace WPEFramework {
namespace Plugin {
namespace {

static const uint16_t kProtocolVersion = 1;
static const uint16_t kGetGlobalRequest = 2;
static const uint16_t kResetRequest = 3;
static const uint16_t kGetProviderRequest = 8;
static const uint16_t kListProvidersRequest = 9;
static const uint16_t kListSlowRequestsRequest = 10;
static const uint16_t kGlobalSnapshot = 4;
static const uint16_t kResetResult = 5;
static const uint16_t kProviderSnapshot = 11;
static const uint16_t kProviderList = 12;
static const uint16_t kSlowRequestList = 13;
static const uint16_t kProviderNotFound = 14;
static const size_t kControlRequestSize = 80;
static const size_t kSnapshotHeaderSize = 128;
static const size_t kOperationMetricsWireSize = 64;
static const size_t kProviderEntrySize = 144;
static const size_t kSlowRequestEntrySize = 224;
static const size_t kMaximumResponseSize = 12288;
static const uint32_t kReporterDeadlineMs = 100;
static const uint32_t kMaximumListEntries = 32;

/** A deliberately bounded private reporter control client. */
class ReporterClient {
public:
    enum class Result {
        Available,
        ProviderNotFound,
        Unavailable
    };

    Result Request(const uint16_t requestType, const string& provider,
        const uint32_t limit, JsonObject& response) const
    {
        uint8_t request[kControlRequestSize] = { 0 };
        uint8_t snapshot[kMaximumResponseSize] = { 0 };
        struct sockaddr_un address;
        struct pollfd descriptor;
        int socketDescriptor = -1;
        ssize_t received;

        if (provider.length() >= 64 || limit > kMaximumListEntries) {
            return Result::Unavailable;
        }

        WriteU16(request, kProtocolVersion);
        WriteU16(request + 2, requestType);
        WriteU32(request + 4, kControlRequestSize);
        WriteU32(request + 8, limit);
        if (provider.empty() == false) {
            std::memcpy(request + 12, provider.c_str(), provider.length());
        }

        socketDescriptor = socket(AF_UNIX, SOCK_SEQPACKET | SOCK_CLOEXEC, 0);
        if (socketDescriptor < 0) {
            return Result::Unavailable;
        }

        std::memset(&address, 0, sizeof(address));
        address.sun_family = AF_UNIX;
#ifdef RBUS_DIAGNOSTICS_TEST_CONTROL_SOCKET
        const char* controlSocket = std::getenv("RBUS_DIAGNOSTICS_TEST_CONTROL_SOCKET");
        if (controlSocket != nullptr && controlSocket[0] != '\0' &&
            std::strlen(controlSocket) < sizeof(address.sun_path)) {
            std::strncpy(address.sun_path, controlSocket, sizeof(address.sun_path) - 1);
        } else {
            std::strncpy(address.sun_path, "/run/rbus-diagnostics/control.sock",
                sizeof(address.sun_path) - 1);
        }
#else
        std::strncpy(address.sun_path, "/run/rbus-diagnostics/control.sock",
            sizeof(address.sun_path) - 1);
#endif
        if (connect(socketDescriptor, reinterpret_cast<const struct sockaddr*>(&address),
                sizeof(address)) != 0) {
            close(socketDescriptor);
            return Result::Unavailable;
        }

        descriptor.fd = socketDescriptor;
        descriptor.events = POLLOUT;
        descriptor.revents = 0;
        if (poll(&descriptor, 1, kReporterDeadlineMs) != 1 ||
            (descriptor.revents & POLLOUT) == 0 ||
            send(socketDescriptor, request, sizeof(request), MSG_NOSIGNAL) !=
                static_cast<ssize_t>(sizeof(request))) {
            close(socketDescriptor);
            return Result::Unavailable;
        }

        descriptor.events = POLLIN;
        descriptor.revents = 0;
        if (poll(&descriptor, 1, kReporterDeadlineMs) != 1 ||
            (descriptor.revents & POLLIN) == 0) {
            close(socketDescriptor);
            return Result::Unavailable;
        }

        received = recv(socketDescriptor, snapshot, sizeof(snapshot), 0);
        close(socketDescriptor);
        if (received < 8 || ReadU16(snapshot) != kProtocolVersion ||
            ReadU32(snapshot + 4) != static_cast<uint32_t>(received)) {
            return Result::Unavailable;
        }
        if (ReadU16(snapshot + 2) == kProviderNotFound) {
            return received == 8 ? Result::ProviderNotFound : Result::Unavailable;
        }
        if (received < static_cast<ssize_t>(kSnapshotHeaderSize)) {
            return Result::Unavailable;
        }

        const uint16_t responseType = ReadU16(snapshot + 2);
        if ((requestType == kGetGlobalRequest &&
                responseType == kGlobalSnapshot) ||
            (requestType == kResetRequest && responseType == kResetResult)) {
            if (received != static_cast<ssize_t>(kSnapshotHeaderSize +
                    (4 * kOperationMetricsWireSize))) {
                return Result::Unavailable;
            }
            PopulateGlobalSnapshot(snapshot, response);
        } else if ((requestType == kGetProviderRequest &&
                       responseType == kProviderSnapshot) ||
                   (requestType == kListProvidersRequest &&
                       responseType == kProviderList)) {
            if (!PopulateProviderResponse(snapshot, static_cast<size_t>(received), response)) {
                return Result::Unavailable;
            }
        } else if (requestType == kListSlowRequestsRequest &&
            responseType == kSlowRequestList) {
            if (!PopulateSlowRequestResponse(snapshot, static_cast<size_t>(received), response)) {
                return Result::Unavailable;
            }
        } else {
            return Result::Unavailable;
        }

        return Result::Available;
    }

private:
    static void WriteU16(uint8_t* target, uint16_t value)
    {
        value = htons(value);
        std::memcpy(target, &value, sizeof(value));
    }

    static void WriteU32(uint8_t* target, uint32_t value)
    {
        value = htonl(value);
        std::memcpy(target, &value, sizeof(value));
    }

    static uint16_t ReadU16(const uint8_t* source)
    {
        uint16_t value;
        std::memcpy(&value, source, sizeof(value));
        return ntohs(value);
    }

    static uint32_t ReadU32(const uint8_t* source)
    {
        uint32_t value;
        std::memcpy(&value, source, sizeof(value));
        return ntohl(value);
    }

    static uint64_t ReadU64(const uint8_t* source)
    {
        uint32_t high;
        uint32_t low;
        std::memcpy(&high, source, sizeof(high));
        std::memcpy(&low, source + sizeof(high), sizeof(low));
        return (static_cast<uint64_t>(ntohl(high)) << 32) | ntohl(low);
    }

    static void PopulateGlobalSnapshot(const uint8_t* snapshot, JsonObject& response)
    {
        JsonObject quality;
        JsonArray operations;
        static const char* operationNames[] = { "get", "set", "method", "asyncMethod" };

        response["reporterInstanceId"] = Core::NumberType<uint64_t>(ReadU64(snapshot + 8)).Text();
        response["reporterStartupEpochUs"] = Core::NumberType<uint64_t>(ReadU64(snapshot + 16)).Text();
        response["measurementGeneration"] = Core::NumberType<uint64_t>(ReadU64(snapshot + 24)).Text();

        quality["availability"] = "AVAILABLE";
        quality["observationsReceived"] = Core::NumberType<uint64_t>(ReadU64(snapshot + 32)).Text();
        quality["malformedObservationsRejected"] = Core::NumberType<uint64_t>(ReadU64(snapshot + 40)).Text();
        quality["providerCapacityOverflows"] = Core::NumberType<uint64_t>(ReadU64(snapshot + 48)).Text();
        quality["pathPrefixCapacityOverflows"] = Core::NumberType<uint64_t>(ReadU64(snapshot + 56)).Text();
        quality["slowRequestOverwrites"] = Core::NumberType<uint64_t>(ReadU64(snapshot + 64)).Text();
        quality["publisherDropDelta"] = Core::NumberType<uint64_t>(ReadU64(snapshot + 72)).Text();
        quality["publisherDropCompletenessPartial"] = ReadU32(snapshot + 104) != 0;
        response["dataQuality"] = quality;

        for (uint32_t index = 0; index < 4; ++index) {
            const uint8_t* metrics = snapshot + kSnapshotHeaderSize +
                (index * kOperationMetricsWireSize);
            JsonObject operation;

            operation["operation"] = operationNames[index];
            operation["requestCount"] = Core::NumberType<uint64_t>(ReadU64(metrics)).Text();
            operation["successCount"] = Core::NumberType<uint64_t>(ReadU64(metrics + 8)).Text();
            operation["timeoutCount"] = Core::NumberType<uint64_t>(ReadU64(metrics + 16)).Text();
            operation["errorCount"] = Core::NumberType<uint64_t>(ReadU64(metrics + 24)).Text();
            operation["durationSumUs"] = Core::NumberType<uint64_t>(ReadU64(metrics + 32)).Text();
            operation["minimumDurationUs"] = Core::NumberType<uint64_t>(ReadU64(metrics + 40)).Text();
            operation["maximumDurationUs"] = Core::NumberType<uint64_t>(ReadU64(metrics + 48)).Text();
            operations.Add(operation);
        }
        response["operations"] = operations;
    }

    static const char* ProviderState(const uint32_t state)
    {
        static const char* names[] = {
            "UNKNOWN", "STARTING", "HEALTHY", "DEGRADED", "UNAVAILABLE", "STOPPED"
        };
        return state < 6 ? names[state] : "UNKNOWN";
    }

    static const char* RegistrationState(const uint32_t state)
    {
        return state == 1 ? "REGISTERED" : state == 2 ? "REMOVED" : "UNKNOWN";
    }

    static JsonObject ProviderEntry(const uint8_t* entry)
    {
        JsonObject provider;
        char name[65] = { 0 };

        std::memcpy(name, entry, 64);
        provider["provider"] = name;
        provider["state"] = ProviderState(ReadU32(entry + 64));
        provider["registrationState"] = RegistrationState(ReadU32(entry + 68));
        provider["restartCount"] = Core::NumberType<uint64_t>(ReadU64(entry + 72)).Text();
        provider["requestCount"] = Core::NumberType<uint64_t>(ReadU64(entry + 80)).Text();
        provider["successCount"] = Core::NumberType<uint64_t>(ReadU64(entry + 88)).Text();
        provider["timeoutCount"] = Core::NumberType<uint64_t>(ReadU64(entry + 96)).Text();
        provider["errorCount"] = Core::NumberType<uint64_t>(ReadU64(entry + 104)).Text();
        provider["durationSumUs"] = Core::NumberType<uint64_t>(ReadU64(entry + 112)).Text();
        provider["minimumDurationUs"] = Core::NumberType<uint64_t>(ReadU64(entry + 120)).Text();
        provider["maximumDurationUs"] = Core::NumberType<uint64_t>(ReadU64(entry + 128)).Text();
        return provider;
    }

    static bool PopulateProviderResponse(const uint8_t* snapshot, const size_t length,
        JsonObject& response)
    {
        const uint32_t count = ReadU32(snapshot + 108);
        JsonArray providers;

        if (count > kMaximumListEntries ||
            length != kSnapshotHeaderSize + (count * kProviderEntrySize)) {
            return false;
        }
        PopulateGlobalSnapshot(snapshot, response);
        for (uint32_t index = 0; index < count; ++index) {
            providers.Add(ProviderEntry(snapshot + kSnapshotHeaderSize +
                (index * kProviderEntrySize)));
        }
        response["providers"] = providers;
        response["returnedCount"] = count;
        if (count == 1) {
            response["providerMetrics"] = ProviderEntry(snapshot + kSnapshotHeaderSize);
        }
        return true;
    }

    static bool PopulateSlowRequestResponse(const uint8_t* snapshot, const size_t length,
        JsonObject& response)
    {
        const uint32_t count = ReadU32(snapshot + 108);
        JsonArray requests;
        static const char* operationNames[] = { "get", "set", "method", "asyncMethod" };

        if (count > kMaximumListEntries ||
            length != kSnapshotHeaderSize + (count * kSlowRequestEntrySize)) {
            return false;
        }
        PopulateGlobalSnapshot(snapshot, response);
        for (uint32_t index = 0; index < count; ++index) {
            const uint8_t* entry = snapshot + kSnapshotHeaderSize +
                (index * kSlowRequestEntrySize);
            const uint32_t operation = ReadU32(entry);
            char provider[65] = { 0 };
            char path[129] = { 0 };
            JsonObject request;

            if (operation >= 4 || ReadU32(entry + 4) > 7) {
                return false;
            }
            std::memcpy(provider, entry + 32, 64);
            std::memcpy(path, entry + 96, 128);
            request["operation"] = operationNames[operation];
            request["outcome"] = ReadU32(entry + 4);
            request["monotonicEndUs"] = Core::NumberType<uint64_t>(ReadU64(entry + 8)).Text();
            request["durationUs"] = Core::NumberType<uint64_t>(ReadU64(entry + 16)).Text();
            request["measurementGeneration"] = Core::NumberType<uint64_t>(ReadU64(entry + 24)).Text();
            request["provider"] = provider;
            request["path"] = path;
            requests.Add(request);
        }
        response["slowRequests"] = requests;
        response["returnedCount"] = count;
        return true;
    }
};

class RBusDiagnostics : public PluginHost::IPlugin, public PluginHost::JSONRPC {
private:
    RBusDiagnostics(const RBusDiagnostics&) = delete;
    RBusDiagnostics& operator=(const RBusDiagnostics&) = delete;

    uint32_t getGlobalMetrics(const JsonObject&, JsonObject& response)
    {
        return ReporterResult(_client.Request(kGetGlobalRequest, string(), 0, response), response);
    }

    uint32_t getProviderMetrics(const JsonObject& parameters, JsonObject& response)
    {
        if (!parameters.HasLabel("provider") || parameters["provider"].String().empty() ||
            parameters["provider"].String().length() > 64) {
            return Core::ERROR_BAD_REQUEST;
        }
        return ReporterResult(_client.Request(kGetProviderRequest,
            parameters["provider"].String(), 0, response), response);
    }

    uint32_t getAllProviders(const JsonObject& parameters, JsonObject& response)
    {
        const uint32_t limit = parameters.HasLabel("limit") ? parameters["limit"].Number() : 32;

        if (limit == 0 || limit > kMaximumListEntries) {
            return Core::ERROR_BAD_REQUEST;
        }
        return ReporterResult(_client.Request(kListProvidersRequest, string(), limit, response),
            response);
    }

    uint32_t getSlowRequests(const JsonObject& parameters, JsonObject& response)
    {
        const uint32_t limit = parameters.HasLabel("limit") ? parameters["limit"].Number() : 32;

        if (limit == 0 || limit > kMaximumListEntries) {
            return Core::ERROR_BAD_REQUEST;
        }
        return ReporterResult(_client.Request(kListSlowRequestsRequest, string(), limit, response),
            response);
    }

    uint32_t resetMetrics(const JsonObject&, JsonObject& response)
    {
        return ReporterResult(_client.Request(kResetRequest, string(), 0, response), response);
    }

    static uint32_t ReporterResult(const ReporterClient::Result result, JsonObject& response)
    {
        if (result == ReporterClient::Result::Available) {
            return Core::ERROR_NONE;
        }
        if (result == ReporterClient::Result::ProviderNotFound) {
            response["error"] = "UNKNOWN_PROVIDER";
            response["message"] = "The requested provider is not retained by this reporter instance.";
            return Core::ERROR_UNKNOWN_KEY;
        }
        response["error"] = "REPORTER_UNAVAILABLE";
        response["message"] = "No compatible RBusDiagnosticsReporter responded before the local deadline.";
        return Core::ERROR_UNAVAILABLE;
    }

public:
    RBusDiagnostics()
        : PluginHost::JSONRPC()
    {
        Register("getGlobalMetrics", &RBusDiagnostics::getGlobalMetrics, this);
        Register("getProviderMetrics", &RBusDiagnostics::getProviderMetrics, this);
        Register("getAllProviders", &RBusDiagnostics::getAllProviders, this);
        Register("getSlowRequests", &RBusDiagnostics::getSlowRequests, this);
        Register("resetMetrics", &RBusDiagnostics::resetMetrics, this);
    }

    ~RBusDiagnostics() override
    {
        Unregister("resetMetrics");
        Unregister("getSlowRequests");
        Unregister("getAllProviders");
        Unregister("getProviderMetrics");
        Unregister("getGlobalMetrics");
    }

    const string Initialize(PluginHost::IShell*) override
    {
        return string();
    }

    void Deinitialize(PluginHost::IShell*) override
    {
    }

    string Information() const override
    {
        return string();
    }

    BEGIN_INTERFACE_MAP(RBusDiagnostics)
    INTERFACE_ENTRY(PluginHost::IPlugin)
    INTERFACE_ENTRY(PluginHost::IDispatcher)
    END_INTERFACE_MAP

private:
    ReporterClient _client;
};

SERVICE_REGISTRATION(RBusDiagnostics, 1, 0, 0);

} // namespace Plugin
} // namespace WPEFramework
