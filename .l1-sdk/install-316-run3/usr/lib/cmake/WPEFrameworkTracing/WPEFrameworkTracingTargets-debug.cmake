#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "WPEFrameworkTracing::WPEFrameworkTracing" for configuration "Debug"
set_property(TARGET WPEFrameworkTracing::WPEFrameworkTracing APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(WPEFrameworkTracing::WPEFrameworkTracing PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libWPEFrameworkTracing.so.2.1.15"
  IMPORTED_SONAME_DEBUG "libWPEFrameworkTracing.so.2"
  )

list(APPEND _IMPORT_CHECK_TARGETS WPEFrameworkTracing::WPEFrameworkTracing )
list(APPEND _IMPORT_CHECK_FILES_FOR_WPEFrameworkTracing::WPEFrameworkTracing "${_IMPORT_PREFIX}/lib/libWPEFrameworkTracing.so.2.1.15" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
