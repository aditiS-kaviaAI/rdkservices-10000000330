#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "WPEFrameworkProtocols::WPEFrameworkProtocols" for configuration "Debug"
set_property(TARGET WPEFrameworkProtocols::WPEFrameworkProtocols APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(WPEFrameworkProtocols::WPEFrameworkProtocols PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libWPEFrameworkProtocols.so.2.1.15"
  IMPORTED_SONAME_DEBUG "libWPEFrameworkProtocols.so.2"
  )

list(APPEND _IMPORT_CHECK_TARGETS WPEFrameworkProtocols::WPEFrameworkProtocols )
list(APPEND _IMPORT_CHECK_FILES_FOR_WPEFrameworkProtocols::WPEFrameworkProtocols "${_IMPORT_PREFIX}/lib/libWPEFrameworkProtocols.so.2.1.15" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
