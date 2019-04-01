#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "system.io" for configuration ""
set_property(TARGET system.io APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(system.io PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsystem.io.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS system.io )
list(APPEND _IMPORT_CHECK_FILES_FOR_system.io "${_IMPORT_PREFIX}/lib/libsystem.io.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
