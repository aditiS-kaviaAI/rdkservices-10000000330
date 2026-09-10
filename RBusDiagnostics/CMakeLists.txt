# If not stated otherwise in this file or this component's LICENSE file the
# following copyright and licenses apply:
#
# Copyright 2026 RDK Management
#
# Licensed under the Apache License, Version 2.0 (the "License");

set(PLUGIN_NAME RBusDiagnostics)
set(MODULE_NAME ${NAMESPACE}${PLUGIN_NAME})

set(PLUGIN_RBUSDIAGNOSTICS_STARTUPORDER "" CACHE STRING
    "To configure startup order of the RBusDiagnostics plugin")
set(PLUGIN_RBUSDIAGNOSTICS_AUTOSTART false CACHE STRING
    "To automatically start the RBusDiagnostics plugin.")
set(RBUS_DIAGNOSTICS_REPORTER_SOURCE_DIR
    "${CMAKE_SOURCE_DIR}/../rbus-10000000330/src/diagnostics-reporter"
    CACHE PATH "Path to the compatible private RBus diagnostics reporter protocol")

# The plugin must not be installed when the private control protocol is absent.
if(NOT EXISTS "${RBUS_DIAGNOSTICS_REPORTER_SOURCE_DIR}/diagnostics_protocol.h")
    message(FATAL_ERROR
        "PLUGIN_RBUSDIAGNOSTICS requires diagnostics_protocol.h from a compatible "
        "RBusDiagnosticsReporter source tree. Set RBUS_DIAGNOSTICS_REPORTER_SOURCE_DIR.")
endif()

find_package(${NAMESPACE}Plugins REQUIRED)
find_package(CompileSettingsDebug CONFIG REQUIRED)

add_library(${MODULE_NAME} SHARED
    RBusDiagnostics.cpp
    Module.cpp)

set_target_properties(${MODULE_NAME} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES)

target_link_libraries(${MODULE_NAME}
    PRIVATE
        CompileSettingsDebug::CompileSettingsDebug
        ${NAMESPACE}Plugins::${NAMESPACE}Plugins)

install(TARGETS ${MODULE_NAME}
    DESTINATION lib/${STORAGE_DIRECTORY}/plugins)

write_config(${PLUGIN_NAME})

option(PLUGIN_RBUSDIAGNOSTICS_TESTS
    "Build fake-reporter JSON-RPC tests for the RBusDiagnostics plugin" OFF)

# Keep fake-control tests opt-in: production plugin builds do not gain a test
# dependency or a test-only control-socket override.
if(PLUGIN_RBUSDIAGNOSTICS_TESTS)
    find_package(GTest REQUIRED)

    add_executable(${MODULE_NAME}Tests
        Tests/RBusDiagnosticsTest.cpp)
    target_compile_definitions(${MODULE_NAME}Tests
        PRIVATE RBUS_DIAGNOSTICS_TEST_CONTROL_SOCKET=1)
    target_link_libraries(${MODULE_NAME}Tests
        PRIVATE
            GTest::gtest_main
            ${NAMESPACE}Plugins::${NAMESPACE}Plugins
            pthread)
    add_test(NAME ${MODULE_NAME}Tests COMMAND ${MODULE_NAME}Tests)
endif()
