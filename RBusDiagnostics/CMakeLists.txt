set(PLUGIN_NAME RBusDiagnostics)
set(MODULE_NAME ${NAMESPACE}${PLUGIN_NAME})

set(PLUGIN_RBUSDIAGNOSTICS_STARTUPORDER "" CACHE STRING
    "To configure startup order of RBusDiagnostics plugin")
set(PLUGIN_RBUSDIAGNOSTICS_AUTOSTART false CACHE STRING
    "To automatically start RBusDiagnostics after its reporter is selected.")

find_package(${NAMESPACE}Plugins REQUIRED)

add_library(${MODULE_NAME} SHARED
    RBusDiagnostics.cpp
    Module.cpp)

set_target_properties(${MODULE_NAME} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES)

target_link_libraries(${MODULE_NAME} PRIVATE
    ${NAMESPACE}Plugins::${NAMESPACE}Plugins)

install(TARGETS ${MODULE_NAME}
    DESTINATION lib/${STORAGE_DIRECTORY}/plugins)

write_config(${PLUGIN_NAME})
