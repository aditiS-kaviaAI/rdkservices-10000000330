#pragma once

#include "Module.h"

namespace WPEFramework {
namespace Plugin {

/**
 * Thunder presentation layer for the device-wide RBus diagnostics reporter.
 *
 * The plugin keeps no metrics state and relies on normal Thunder authorization
 * before handlers are dispatched.
 */
class RBusDiagnostics : public PluginHost::IPlugin, public PluginHost::JSONRPC {
private:
    RBusDiagnostics(const RBusDiagnostics&) = delete;
    RBusDiagnostics& operator=(const RBusDiagnostics&) = delete;

    uint32_t getGlobalMetrics(const JsonObject& parameters, JsonObject& response);
    uint32_t resetMetrics(const JsonObject& parameters, JsonObject& response);
    uint32_t requestReporter(const char* request, JsonObject& response) const;

public:
    RBusDiagnostics();
    ~RBusDiagnostics() override;

    const string Initialize(PluginHost::IShell* service) override;
    void Deinitialize(PluginHost::IShell* service) override;
    string Information() const override;

    BEGIN_INTERFACE_MAP(RBusDiagnostics)
    INTERFACE_ENTRY(PluginHost::IPlugin)
    INTERFACE_ENTRY(PluginHost::IDispatcher)
    END_INTERFACE_MAP
};

} // namespace Plugin
} // namespace WPEFramework
