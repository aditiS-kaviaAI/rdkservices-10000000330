/*
 * Copyright 2026 RDK Management
 *
 * Licensed under the Apache License, Version 2.0.
 */

#pragma once

#include "Module.h"

namespace WPEFramework {
namespace Plugin {

/**
 * Exposes bounded, process-local RBus diagnostic snapshots through Thunder.
 *
 * Authorization is intentionally enforced by the deployed SecurityAgent ACL
 * using the callsign and JSON-RPC method. This plugin neither assigns roles
 * nor bypasses the Thunder authorization pipeline.
 */
class RBusDiagnostics : public PluginHost::IPlugin, public PluginHost::JSONRPC {
private:
    RBusDiagnostics(const RBusDiagnostics&) = delete;
    RBusDiagnostics& operator=(const RBusDiagnostics&) = delete;

    uint32_t getGlobalMetrics(const JsonObject& parameters, JsonObject& response);
    uint32_t getProviderMetrics(const JsonObject& parameters, JsonObject& response);
    uint32_t getAllProviders(const JsonObject& parameters, JsonObject& response);
    uint32_t getSlowRequests(const JsonObject& parameters, JsonObject& response);
    uint32_t resetMetrics(const JsonObject& parameters, JsonObject& response);
    uint32_t getConfiguration(const JsonObject& parameters, JsonObject& response);
    uint32_t setConfiguration(const JsonObject& parameters, JsonObject& response);

public:
    // PUBLIC_INTERFACE
    /** Creates the plugin and registers every supported JSON-RPC method. */
    RBusDiagnostics();

    // PUBLIC_INTERFACE
    /** Unregisters all JSON-RPC methods owned by this plugin. */
    ~RBusDiagnostics() override;

    // PUBLIC_INTERFACE
    /**
     * Initializes the plugin after Thunder has completed deployed-policy setup.
     *
     * @param service The hosting Thunder shell.
     * @return An empty string on success; an error description otherwise.
     */
    const string Initialize(PluginHost::IShell* service) override;

    // PUBLIC_INTERFACE
    /**
     * Deinitializes the plugin without changing collector or RBus resource state.
     *
     * @param service The hosting Thunder shell.
     */
    void Deinitialize(PluginHost::IShell* service) override;

    // PUBLIC_INTERFACE
    /** Returns plugin information exposed by the Thunder host. */
    string Information() const override;

    BEGIN_INTERFACE_MAP(RBusDiagnostics)
    INTERFACE_ENTRY(PluginHost::IPlugin)
    INTERFACE_ENTRY(PluginHost::IDispatcher)
    END_INTERFACE_MAP
};

} // namespace Plugin
} // namespace WPEFramework
