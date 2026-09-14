#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "WPEFrameworkDefinitions::WPEFrameworkDefinitions" for configuration ""
set_property(TARGET WPEFrameworkDefinitions::WPEFrameworkDefinitions APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(WPEFrameworkDefinitions::WPEFrameworkDefinitions PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libWPEFrameworkDefinitions.so.2.1.16"
  IMPORTED_SONAME_NOCONFIG "libWPEFrameworkDefinitions.so.2"
  )

list(APPEND _IMPORT_CHECK_TARGETS WPEFrameworkDefinitions::WPEFrameworkDefinitions )
list(APPEND _IMPORT_CHECK_FILES_FOR_WPEFrameworkDefinitions::WPEFrameworkDefinitions "${_IMPORT_PREFIX}/lib/libWPEFrameworkDefinitions.so.2.1.16" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
