#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "WPEFrameworkPlugins::WPEFrameworkPlugins" for configuration "Debug"
set_property(TARGET WPEFrameworkPlugins::WPEFrameworkPlugins APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(WPEFrameworkPlugins::WPEFrameworkPlugins PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libWPEFrameworkPlugins.so.2.1.15"
  IMPORTED_SONAME_DEBUG "libWPEFrameworkPlugins.so.2"
  )

list(APPEND _IMPORT_CHECK_TARGETS WPEFrameworkPlugins::WPEFrameworkPlugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_WPEFrameworkPlugins::WPEFrameworkPlugins "${_IMPORT_PREFIX}/lib/libWPEFrameworkPlugins.so.2.1.15" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
