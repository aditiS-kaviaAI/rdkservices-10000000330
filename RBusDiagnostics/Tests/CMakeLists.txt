find_package(GTest REQUIRED)

add_executable(rbus_diagnostics_plugin_tests
    test_RBusDiagnostics.cpp)

set_target_properties(rbus_diagnostics_plugin_tests PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES)

target_include_directories(rbus_diagnostics_plugin_tests
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/..)

target_link_libraries(rbus_diagnostics_plugin_tests
    PRIVATE
        GTest::gtest_main
        ${NAMESPACE}Plugins::${NAMESPACE}Plugins)

add_test(
    NAME rbus-diagnostics-plugin-tests
    COMMAND rbus_diagnostics_plugin_tests)
