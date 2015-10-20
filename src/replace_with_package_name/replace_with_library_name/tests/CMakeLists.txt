build_target(
    BASENAME ut_Template
    TYPE     Executable
    GROUP    replace_me_with_library_name/UnitTests
    INCLUDE_DIRS
    DEFINES
    COMPILE_FLAGS
        ${BUILD_COMPILEFLAGS}
    LIBRARIES
        ${Boost_LIBRARIES}
    FLAT_SOURCE_TREE
    HEADERS_PUBLIC
    HEADERS_PRIVATE
    SOURCES
        ut_Template.cpp
    NO_INSTALL
)
add_test( NAME ut_Template COMMAND ut_Template )
