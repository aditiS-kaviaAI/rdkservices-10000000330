#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "WPEFrameworkProxyStubs::WPEFrameworkProxyStubs" for configuration "Debug"
set_property(TARGET WPEFrameworkProxyStubs::WPEFrameworkProxyStubs APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(WPEFrameworkProxyStubs::WPEFrameworkProxyStubs PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "WPEFrameworkProtocols::WPEFrameworkProtocols"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/wpeframework/proxystubs/libWPEFrameworkProxyStubs.so.2.1.15"
  IMPORTED_SONAME_DEBUG "libWPEFrameworkProxyStubs.so.2"
  )

list(APPEND _IMPORT_CHECK_TARGETS WPEFrameworkProxyStubs::WPEFrameworkProxyStubs )
list(APPEND _IMPORT_CHECK_FILES_FOR_WPEFrameworkProxyStubs::WPEFrameworkProxyStubs "${_IMPORT_PREFIX}/lib/wpeframework/proxystubs/libWPEFrameworkProxyStubs.so.2.1.15" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
