#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "MultiNEAT::MultiNEAT" for configuration "Release"
set_property(TARGET MultiNEAT::MultiNEAT APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MultiNEAT::MultiNEAT PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMultiNEAT.dylib"
  IMPORTED_SONAME_RELEASE "@rpath/libMultiNEAT.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS MultiNEAT::MultiNEAT )
list(APPEND _IMPORT_CHECK_FILES_FOR_MultiNEAT::MultiNEAT "${_IMPORT_PREFIX}/lib/libMultiNEAT.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
