#pragma once

#include <stdint.h>

#include <string>

namespace WPEFramework {
namespace Plugin {

/**
 * @brief Performs one bounded request against the reporter's private local
 * control endpoint. This client owns no metrics cache and never starts the
 * reporter service.
 */
class ReporterClient {
public:
    enum class RequestType : uint16_t {
        Snapshot = 2,
        Reset = 3,
        ProviderMetrics = 6,
        ProviderList = 7,
        SlowRequestList = 8
    };

    enum class ReplyStatus : uint16_t {
        Success = 0,
        ProviderNotFound = 1
    };

    struct Reply {
        RequestType type;
        uint64_t requestId;
        ReplyStatus status;
        std::string payload;
    };

    static const uint32_t kReporterUnavailable = 1;
    static const uint32_t kMalformedReply = 2;

    ReporterClient();
    ~ReporterClient();

    /**
     * @brief Sends one bounded, versioned control request and validates the
     * correlated reply before returning its bounded JSON object payload.
     */
    uint32_t Request(
        RequestType requestType,
        uint64_t requestId,
        const std::string& provider,
        uint16_t limit,
        Reply* reply) const;

private:
    ReporterClient(const ReporterClient&) = delete;
    ReporterClient& operator=(const ReporterClient&) = delete;

    static const char kControlSocketPath[];
    static const uint32_t kDeadlineMilliseconds = 250;
    static const uint32_t kMaximumControlBytes = 16384;
};

} // namespace Plugin
} // namespace WPEFramework
