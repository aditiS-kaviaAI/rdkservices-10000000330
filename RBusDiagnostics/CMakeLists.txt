# Copyright 2026 RDK Management
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.

set(PLUGIN_NAME RBusDiagnostics)
set(MODULE_NAME ${NAMESPACE}${PLUGIN_NAME})

set(PLUGIN_RBUSDIAGNOSTICS_STARTUPORDER "" CACHE STRING
    "To configure startup order of RBusDiagnostics plugin")
set(PLUGIN_RBUSDIAGNOSTICS_AUTOSTART false CACHE STRING
    "To automatically start RBusDiagnostics plugin.")
option(HAS_RBUS_DIAGNOSTICS
    "Enable integration with the private RBus diagnostics library" OFF)

if(NOT HAS_RBUS_DIAGNOSTICS)
    message(FATAL_ERROR
        "PLUGIN_RBUSDIAGNOSTICS requires HAS_RBUS_DIAGNOSTICS=ON and a compatible "
        "private RBus diagnostics library.")
endif()

find_package(${NAMESPACE}Plugins REQUIRED)

# The diagnostics ABI is deliberately installed outside the public RBus headers.
find_path(RBUS_DIAGNOSTICS_INCLUDE_DIR
    NAMES rbus_diagnostics_private.h
    PATH_SUFFIXES rbus-private
    REQUIRED)
find_library(RBUS_DIAGNOSTICS_LIBRARY
    NAMES rbus_diagnostics
    REQUIRED)

add_library(${MODULE_NAME} SHARED
    RBusDiagnostics.cpp
    Module.cpp)

set_target_properties(${MODULE_NAME} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES)

target_include_directories(${MODULE_NAME} PRIVATE
    ${RBUS_DIAGNOSTICS_INCLUDE_DIR}
    ../helpers)

target_link_libraries(${MODULE_NAME} PRIVATE
    ${NAMESPACE}Plugins::${NAMESPACE}Plugins
    ${RBUS_DIAGNOSTICS_LIBRARY})

install(TARGETS ${MODULE_NAME}
    DESTINATION lib/${STORAGE_DIRECTORY}/plugins)

write_config(${PLUGIN_NAME})
