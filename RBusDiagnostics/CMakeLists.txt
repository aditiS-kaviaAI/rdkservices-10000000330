# If not stated otherwise in this file or this component's license file the
# following copyright and licenses apply:
#
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

find_package(${NAMESPACE}Plugins REQUIRED)

add_library(${MODULE_NAME} SHARED
    Module.cpp
    RBusDiagnostics.cpp
    ReporterClient.cpp)

set_target_properties(${MODULE_NAME} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES)

target_link_libraries(${MODULE_NAME}
    PRIVATE
        ${NAMESPACE}Plugins::${NAMESPACE}Plugins)

install(TARGETS ${MODULE_NAME}
    DESTINATION lib/${STORAGE_DIRECTORY}/plugins)

write_config(${PLUGIN_NAME})

if(BUILD_TESTING)
    add_subdirectory(Tests)
endif()
