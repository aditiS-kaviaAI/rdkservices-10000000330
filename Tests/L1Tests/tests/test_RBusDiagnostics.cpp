/*
 * Copyright 2026 RDK Management
 *
 * Licensed under the Apache License, Version 2.0.
 */

#include "gtest/gtest.h"

#include <algorithm>
#include <cstring>

#include "test_RBusDiagnosticsPrivate.h"

namespace RBusDiagnosticsPrivateTest {

State state;

void ResetState()
{
    std::memset(&state, 0, sizeof(state));
    state.abiMajor = RBUS_DIAGNOSTICS_ABI_MAJOR;
    state.abiMinor = RBUS_DIAGNOSTICS_ABI_MINOR;
    state.globalStatus = RBUS_DIAGNOSTICS_STATUS_OK;
    state.providerStatus = RBUS_DIAGNOSTICS_STATUS_OK;
    state.providersStatus = RBUS_DIAGNOSTICS_STATUS_OK;
    state.slowRequestsStatus = RBUS_DIAGNOSTICS_STATUS_OK;
    state.resetStatus = RBUS_DIAGNOSTICS_STATUS_OK;
    state.configurationStatus = RBUS_DIAGNOSTICS_STATUS_OK;
    state.setConfigurationStatus = RBUS_DIAGNOSTICS_STATUS_OK;
    state.configuration.enabled = true;
    state.configuration.slow_request_threshold_us = 5000;
}

} // namespace RBusDiagnosticsPrivateTest

extern "C" {

void rbusDiagnostics_GetAbiVersion(uint32_t* major, uint32_t* minor)
{
    *major = RBusDiagnosticsPrivateTest::state.abiMajor;
    *minor = RBusDiagnosticsPrivateTest::state.abiMinor;
}

rbus_diagnostics_status_t rbusDiagnostics_GetConfiguration(
    rbus_diagnostics_configuration_t* output)
{
    *output = RBusDiagnosticsPrivateTest::state.configuration;
    return RBusDiagnosticsPrivateTest::state.configurationStatus;
}

rbus_diagnostics_status_t rbusDiagnostics_SetConfiguration(
    const rbus_diagnostics_configuration_t* configuration)
{
    RBusDiagnosticsPrivateTest::state.configuration = *configuration;
    return RBusDiagnosticsPrivateTest::state.setConfigurationStatus;
}

rbus_diagnostics_status_t rbusDiagnostics_GetGlobalSnapshot(
    rbus_diagnostics_global_snapshot_t* output)
{
    *output = RBusDiagnosticsPrivateTest::state.globalSnapshot;
    return RBusDiagnosticsPrivateTest::state.globalStatus;
}

rbus_diagnostics_status_t rbusDiagnostics_GetProviderSnapshot(
    const char* /* providerId */,
    rbus_diagnostics_provider_snapshot_t* output)
{
    *output = RBusDiagnosticsPrivateTest::state.providerSnapshot;
    return RBusDiagnosticsPrivateTest::state.providerStatus;
}

rbus_diagnostics_status_t rbusDiagnostics_ListProviders(
    uint32_t limit,
    rbus_diagnostics_provider_snapshot_t* output,
    uint32_t outputCapacity,
    uint32_t* outputCount)
{
    const uint32_t count = std::min(
        std::min(limit, outputCapacity),
        RBusDiagnosticsPrivateTest::state.providerCount);
    std::memcpy(output, RBusDiagnosticsPrivateTest::state.providers,
        count * sizeof(*output));
    *outputCount = count;
    return RBusDiagnosticsPrivateTest::state.providersStatus;
}

rbus_diagnostics_status_t rbusDiagnostics_ListSlowRequests(
    uint32_t limit,
    rbus_diagnostics_slow_request_snapshot_t* output,
    uint32_t outputCapacity,
    uint32_t* outputCount)
{
    const uint32_t count = std::min(
        std::min(limit, outputCapacity),
        RBusDiagnosticsPrivateTest::state.slowRequestCount);
    std::memcpy(output, RBusDiagnosticsPrivateTest::state.slowRequests,
        count * sizeof(*output));
    *outputCount = count;
    return RBusDiagnosticsPrivateTest::state.slowRequestsStatus;
}

rbus_diagnostics_status_t rbusDiagnostics_Reset(void)
{
    RBusDiagnosticsPrivateTest::state.resetCalled = true;
    return RBusDiagnosticsPrivateTest::state.resetStatus;
}

} // extern "C"

// Compile the production handlers against the test-local private ABI replacement.
// This exercises registration, validation, status mapping, and serialization without
// modifying the production RBus API mock or requiring a live RBus process.
#include "../../../RBusDiagnostics/RBusDiagnostics.cpp"

using namespace WPEFramework;

namespace {

class RBusDiagnosticsTest : public ::testing::Test {
protected:
    Core::ProxyType<Plugin::RBusDiagnostics> plugin;
    Core::JSONRPC::Handler& handler;
    Core::JSONRPC::Connection connection;
    string response;

    RBusDiagnosticsTest()
        : plugin(Core::ProxyType<Plugin::RBusDiagnostics>::Create())
        , handler(*plugin)
        , connection(1, 0)
    {
    }

    void SetUp() override
    {
        RBusDiagnosticsPrivateTest::ResetState();
    }

    void Invoke(const string& method, const string& parameters)
    {
        response.clear();
        ASSERT_EQ(Core::ERROR_NONE,
            handler.Invoke(connection, method, parameters, response));
    }
};

TEST_F(RBusDiagnosticsTest, RegistersEverySchemaMethod)
{
    EXPECT_EQ(Core::ERROR_NONE, handler.Exists(_T("getGlobalMetrics")));
    EXPECT_EQ(Core::ERROR_NONE, handler.Exists(_T("getProviderMetrics")));
    EXPECT_EQ(Core::ERROR_NONE, handler.Exists(_T("getAllProviders")));
    EXPECT_EQ(Core::ERROR_NONE, handler.Exists(_T("getSlowRequests")));
    EXPECT_EQ(Core::ERROR_NONE, handler.Exists(_T("resetMetrics")));
    EXPECT_EQ(Core::ERROR_NONE, handler.Exists(_T("getConfiguration")));
    EXPECT_EQ(Core::ERROR_NONE, handler.Exists(_T("setConfiguration")));
}

TEST_F(RBusDiagnosticsTest, GlobalMetricsReturnsNullableLatencyAndPercentiles)
{
    RBusDiagnosticsPrivateTest::state.globalSnapshot.request_count = 19;
    RBusDiagnosticsPrivateTest::state.globalSnapshot.epoch = 7;
    RBusDiagnosticsPrivateTest::state.globalSnapshot.latency_available = false;
    RBusDiagnosticsPrivateTest::state.globalSnapshot.percentiles_available = false;

    Invoke(_T("getGlobalMetrics"), _T("{}"));

    EXPECT_NE(string::npos, response.find(_T("\"status\":\"OK\"")));
    EXPECT_NE(string::npos, response.find(_T("\"success\":true")));
    EXPECT_NE(string::npos, response.find(_T("\"requestCount\":19")));
    EXPECT_NE(string::npos, response.find(_T("\"epoch\":7")));
    EXPECT_NE(string::npos, response.find(_T("\"minLatencyUs\":null")));
    EXPECT_NE(string::npos, response.find(_T("\"p50LatencyUs\":null")));
    EXPECT_NE(string::npos, response.find(_T("\"p99LatencyUs\":null")));
}

TEST_F(RBusDiagnosticsTest, ProviderValidationPrecedesLocalAbiAndSnapshotCalls)
{
    RBusDiagnosticsPrivateTest::state.abiMajor = 99;

    Invoke(_T("getProviderMetrics"), _T("{}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"INVALID_REQUEST\"")));

    Invoke(_T("getProviderMetrics"), _T("{\"provider\":\"provider\\nname\"}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"INVALID_REQUEST\"")));

    RBusDiagnosticsPrivateTest::state.abiMajor = RBUS_DIAGNOSTICS_ABI_MAJOR;
    RBusDiagnosticsPrivateTest::state.providerStatus = RBUS_DIAGNOSTICS_STATUS_NOT_FOUND;
    Invoke(_T("getProviderMetrics"), _T("{\"provider\":\"missing-provider\"}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"NOT_FOUND\"")));
    EXPECT_NE(string::npos, response.find(_T("\"success\":false")));
}

TEST_F(RBusDiagnosticsTest, ListMethodsRejectInvalidLimitsAndMapDependencyStatuses)
{
    Invoke(_T("getAllProviders"), _T("{\"limit\":0}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"LIMIT_INVALID\"")));

    Invoke(_T("getAllProviders"), _T("{\"limit\":65}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"LIMIT_INVALID\"")));

    Invoke(_T("getSlowRequests"), _T("{\"limit\":101}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"LIMIT_INVALID\"")));

    RBusDiagnosticsPrivateTest::state.providersStatus =
        RBUS_DIAGNOSTICS_STATUS_UNAVAILABLE;
    Invoke(_T("getAllProviders"), _T("{}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"UNAVAILABLE\"")));

    RBusDiagnosticsPrivateTest::state.slowRequestsStatus =
        RBUS_DIAGNOSTICS_STATUS_DISABLED;
    Invoke(_T("getSlowRequests"), _T("{}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"DISABLED\"")));
}

TEST_F(RBusDiagnosticsTest, SlowRequestResponseIsMetadataOnly)
{
    RBusDiagnosticsPrivateTest::state.slowRequestCount = 1;
    rbus_diagnostics_slow_request_snapshot_t& request =
        RBusDiagnosticsPrivateTest::state.slowRequests[0];
    request.operation = RBUS_DIAGNOSTICS_OPERATION_METHOD_SYNC;
    request.outcome = RBUS_DIAGNOSTICS_OUTCOME_TIMEOUT;
    std::strcpy(request.operation_name, "Device.Diagnostics.Ping");
    std::strcpy(request.provider_name, "DiagnosticsProvider");
    request.latency_us = 9000;
    request.completed_epoch_ms = 1234;
    request.epoch = 3;

    Invoke(_T("getSlowRequests"), _T("{\"limit\":1}"));

    EXPECT_NE(string::npos, response.find(_T("\"operationName\":\"Device.Diagnostics.Ping\"")));
    EXPECT_NE(string::npos, response.find(_T("\"providerName\":\"DiagnosticsProvider\"")));
    EXPECT_NE(string::npos, response.find(_T("\"latencyUs\":9000")));
    EXPECT_EQ(string::npos, response.find(_T("payload")));
    EXPECT_EQ(string::npos, response.find(_T("credential")));
    EXPECT_EQ(string::npos, response.find(_T("token")));
    EXPECT_EQ(string::npos, response.find(_T("trace")));
}

TEST_F(RBusDiagnosticsTest, AbiMismatchIsReportedForEveryLocalDependencyMethod)
{
    RBusDiagnosticsPrivateTest::state.abiMinor = RBUS_DIAGNOSTICS_ABI_MINOR - 1;

    Invoke(_T("getGlobalMetrics"), _T("{}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"ABI_MISMATCH\"")));

    Invoke(_T("resetMetrics"), _T("{}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"ABI_MISMATCH\"")));
    EXPECT_FALSE(RBusDiagnosticsPrivateTest::state.resetCalled);

    Invoke(_T("getConfiguration"), _T("{}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"ABI_MISMATCH\"")));
}

TEST_F(RBusDiagnosticsTest, ResetAndConfigurationMethodsValidateAndRouteToPrivateApi)
{
    RBusDiagnosticsPrivateTest::state.resetStatus = RBUS_DIAGNOSTICS_STATUS_DISABLED;
    Invoke(_T("resetMetrics"), _T("{}"));
    EXPECT_TRUE(RBusDiagnosticsPrivateTest::state.resetCalled);
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"DISABLED\"")));

    Invoke(_T("setConfiguration"), _T("{\"enabled\":true}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"INVALID_REQUEST\"")));

    Invoke(_T("setConfiguration"),
        _T("{\"enabled\":\"true\",\"slowRequestThresholdUs\":5000}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"INVALID_REQUEST\"")));

    Invoke(_T("setConfiguration"),
        _T("{\"enabled\":false,\"slowRequestThresholdUs\":0}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"INVALID_REQUEST\"")));

    Invoke(_T("setConfiguration"),
        _T("{\"enabled\":false,\"slowRequestThresholdUs\":2500}"));
    EXPECT_NE(string::npos, response.find(_T("\"status\":\"OK\"")));
    EXPECT_FALSE(RBusDiagnosticsPrivateTest::state.configuration.enabled);
    EXPECT_EQ(2500U,
        RBusDiagnosticsPrivateTest::state.configuration.slow_request_threshold_us);

    Invoke(_T("getConfiguration"), _T("{}"));
    EXPECT_NE(string::npos, response.find(_T("\"enabled\":false")));
    EXPECT_NE(string::npos, response.find(_T("\"slowRequestThresholdUs\":2500")));
}

} // namespace
