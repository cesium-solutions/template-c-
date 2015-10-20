build_target(
    BASENAME replace_with_library_name
    TYPE     Library
    GROUP    Libraries
    INCLUDE_DIRS
    DEFINES
    COMPILE_FLAGS
        ${BUILD_COMPILEFLAGS}
    LIBRARIES
        ${Boost_LIBRARIES}
    FLAT_SOURCE_TREE
    HEADERS_PUBLIC
        replace_with_library_nameAPI.h
        Template.hpp
    HEADERS_PRIVATE
    SOURCES
        Template.cpp
    HEADER_INSTALL_DIR include/replace_with_package_name/replace_with_library_name
)

if ( BUILD_UnitTests STREQUAL "ON" )
  add_subdirectory( tests )
endif()
