build_target(
    BASENAME replace_with_app_name
    TYPE     Executable
    GROUP    Applications
    INCLUDE_DIRS
        ../..
    DEFINES
    COMPILE_FLAGS
        ${BUILD_COMPILEFLAGS}
    LIBRARIES
        replace_with_library_name
        ${Boost_LIBRARIES}
    FLAT_SOURCE_TREE
    SOURCES
        replace_with_app_name.cpp
)
