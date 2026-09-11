#pragma once

#include "Module.h"
#include "ReporterClient.h"

#include <stdint.h>

namespace WPEFramework {
namespace Plugin {

/**
 * @brief Exposes authorized, bounded RBus diagnostics reporter controls through
 * Thunder JSON-RPC without retaining a local metrics store.
 */
class RBusDiagnostics : public PluginHost::IPlugin, public PluginHost::JSONRPC {
public:
    RBusDiagnostics();
    ~RBusDiagnostics() override;

    RBusDiagnostics(const RBusDiagnostics&) = delete;
    RBusDiagnostics& operator=(const RBusDiagnostics&) = delete;

    const string Initialize(PluginHost::IShell* service) override;
    void Deinitialize(PluginHost::IShell* service) override;
    string Information() const override;

    BEGIN_INTERFACE_MAP(RBusDiagnostics)
    INTERFACE_ENTRY(PluginHost::IPlugin)
    INTERFACE_ENTRY(PluginHost::IDispatcher)
    END_INTERFACE_MAP

private:
    uint32_t GetGlobalMetrics(const JsonObject& parameters, JsonObject& response);
    uint32_t GetProviderMetrics(const JsonObject& parameters, JsonObject& response);
    uint32_t GetAllProviders(const JsonObject& parameters, JsonObject& response);
    uint32_t GetSlowRequests(const JsonObject& parameters, JsonObject& response);
    uint32_t ResetMetrics(const JsonObject& parameters, JsonObject& response);

    uint32_t ValidateEmptyParameters(const JsonObject& parameters) const;
    uint32_t ValidateLimit(const JsonObject& parameters, uint32_t* limit) const;
    uint32_t RequestReporter(
        ReporterClient::RequestType requestType,
        const std::string& provider,
        uint16_t limit,
        JsonObject& response);

    ReporterClient reporterClient_;
    uint64_t nextRequestId_;
    bool initialized_;
};

} // namespace Plugin
} // namespace WPEFramework
