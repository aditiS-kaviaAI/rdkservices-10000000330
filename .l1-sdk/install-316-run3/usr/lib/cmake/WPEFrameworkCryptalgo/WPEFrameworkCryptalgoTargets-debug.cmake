#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "WPEFrameworkCryptalgo::WPEFrameworkCryptalgo" for configuration "Debug"
set_property(TARGET WPEFrameworkCryptalgo::WPEFrameworkCryptalgo APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(WPEFrameworkCryptalgo::WPEFrameworkCryptalgo PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libWPEFrameworkCryptalgo.so.2.1.15"
  IMPORTED_SONAME_DEBUG "libWPEFrameworkCryptalgo.so.2"
  )

list(APPEND _IMPORT_CHECK_TARGETS WPEFrameworkCryptalgo::WPEFrameworkCryptalgo )
list(APPEND _IMPORT_CHECK_FILES_FOR_WPEFrameworkCryptalgo::WPEFrameworkCryptalgo "${_IMPORT_PREFIX}/lib/libWPEFrameworkCryptalgo.so.2.1.15" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
