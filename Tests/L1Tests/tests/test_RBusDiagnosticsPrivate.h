#pragma once

#include <cstdint>
#include <cstring>

#ifndef RBUS_DIAGNOSTICS_PRIVATE_H
#define RBUS_DIAGNOSTICS_PRIVATE_H

#define RBUS_DIAGNOSTICS_ABI_MAJOR 1U
#define RBUS_DIAGNOSTICS_ABI_MINOR 0U
#define RBUS_DIAGNOSTICS_MAX_PROVIDERS 64U
#define RBUS_DIAGNOSTICS_MAX_SLOW_REQUESTS 100U
#define RBUS_DIAGNOSTICS_MAX_IDENTIFIER_LENGTH 128U

extern "C" {

typedef enum {
    RBUS_DIAGNOSTICS_STATUS_OK = 0,
    RBUS_DIAGNOSTICS_STATUS_DISABLED,
    RBUS_DIAGNOSTICS_STATUS_NOT_FOUND,
    RBUS_DIAGNOSTICS_STATUS_LIMIT_INVALID,
    RBUS_DIAGNOSTICS_STATUS_UNAVAILABLE,
    RBUS_DIAGNOSTICS_STATUS_ABI_MISMATCH
} rbus_diagnostics_status_t;

typedef enum {
    RBUS_DIAGNOSTICS_OPERATION_GET = 0,
    RBUS_DIAGNOSTICS_OPERATION_SET,
    RBUS_DIAGNOSTICS_OPERATION_METHOD_SYNC,
    RBUS_DIAGNOSTICS_OPERATION_TABLE
} rbus_diagnostics_operation_kind_t;

typedef enum {
    RBUS_DIAGNOSTICS_OUTCOME_SUCCESS = 0,
    RBUS_DIAGNOSTICS_OUTCOME_TIMEOUT,
    RBUS_DIAGNOSTICS_OUTCOME_PROVIDER_UNAVAILABLE,
    RBUS_DIAGNOSTICS_OUTCOME_INVALID_REQUEST,
    RBUS_DIAGNOSTICS_OUTCOME_INVALID_RESPONSE,
    RBUS_DIAGNOSTICS_OUTCOME_PERMISSION_DENIED,
    RBUS_DIAGNOSTICS_OUTCOME_INTERNAL_ERROR,
    RBUS_DIAGNOSTICS_OUTCOME_UNKNOWN
} rbus_diagnostics_outcome_t;

typedef struct {
    uint64_t request_count;
    uint64_t success_count;
    uint64_t error_count;
    uint64_t timeout_count;
    uint64_t min_latency_us;
    uint64_t max_latency_us;
    uint64_t average_latency_us;
    uint64_t epoch;
    bool latency_available;
    bool percentiles_available;
    uint64_t p50_latency_us;
    uint64_t p90_latency_us;
    uint64_t p95_latency_us;
    uint64_t p99_latency_us;
} rbus_diagnostics_global_snapshot_t;

typedef struct {
    char provider[RBUS_DIAGNOSTICS_MAX_IDENTIFIER_LENGTH];
    bool identifier_truncated;
    rbus_diagnostics_global_snapshot_t aggregate;
} rbus_diagnostics_provider_snapshot_t;

typedef struct {
    rbus_diagnostics_operation_kind_t operation;
    rbus_diagnostics_outcome_t outcome;
    char operation_name[RBUS_DIAGNOSTICS_MAX_IDENTIFIER_LENGTH];
    char provider_name[RBUS_DIAGNOSTICS_MAX_IDENTIFIER_LENGTH];
    bool operation_name_truncated;
    bool provider_name_truncated;
    uint64_t latency_us;
    uint64_t completed_epoch_ms;
    uint64_t epoch;
} rbus_diagnostics_slow_request_snapshot_t;

typedef struct {
    bool enabled;
    uint64_t slow_request_threshold_us;
} rbus_diagnostics_configuration_t;

void rbusDiagnostics_GetAbiVersion(uint32_t* major, uint32_t* minor);
rbus_diagnostics_status_t rbusDiagnostics_GetConfiguration(
    rbus_diagnostics_configuration_t* output);
rbus_diagnostics_status_t rbusDiagnostics_SetConfiguration(
    const rbus_diagnostics_configuration_t* configuration);
rbus_diagnostics_status_t rbusDiagnostics_GetGlobalSnapshot(
    rbus_diagnostics_global_snapshot_t* output);
rbus_diagnostics_status_t rbusDiagnostics_GetProviderSnapshot(
    const char* provider_id,
    rbus_diagnostics_provider_snapshot_t* output);
rbus_diagnostics_status_t rbusDiagnostics_ListProviders(
    uint32_t limit,
    rbus_diagnostics_provider_snapshot_t* output,
    uint32_t output_capacity,
    uint32_t* output_count);
rbus_diagnostics_status_t rbusDiagnostics_ListSlowRequests(
    uint32_t limit,
    rbus_diagnostics_slow_request_snapshot_t* output,
    uint32_t output_capacity,
    uint32_t* output_count);
rbus_diagnostics_status_t rbusDiagnostics_Reset(void);

} // extern "C"

namespace RBusDiagnosticsPrivateTest {

struct State {
    uint32_t abiMajor;
    uint32_t abiMinor;
    rbus_diagnostics_status_t globalStatus;
    rbus_diagnostics_status_t providerStatus;
    rbus_diagnostics_status_t providersStatus;
    rbus_diagnostics_status_t slowRequestsStatus;
    rbus_diagnostics_status_t resetStatus;
    rbus_diagnostics_status_t configurationStatus;
    rbus_diagnostics_status_t setConfigurationStatus;
    rbus_diagnostics_global_snapshot_t globalSnapshot;
    rbus_diagnostics_provider_snapshot_t providerSnapshot;
    rbus_diagnostics_provider_snapshot_t providers[RBUS_DIAGNOSTICS_MAX_PROVIDERS];
    rbus_diagnostics_slow_request_snapshot_t slowRequests[RBUS_DIAGNOSTICS_MAX_SLOW_REQUESTS];
    uint32_t providerCount;
    uint32_t slowRequestCount;
    rbus_diagnostics_configuration_t configuration;
    bool resetCalled;
};

extern State state;

void ResetState();

} // namespace RBusDiagnosticsPrivateTest

#endif // RBUS_DIAGNOSTICS_PRIVATE_H
