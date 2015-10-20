cmake_minimum_required(VERSION 2.6)

# ---------------------
# Project-wide settings
# ---------------------
project( replace_with_project_name )
set( CMAKE_VENDOR_NAME replace_with_vendor_name )

set( CMAKE_MODULE_PATH
     ${${CMAKE_PROJECT_NAME}_SOURCE_DIR}/../cesium-common/cmake
     ${${CMAKE_PROJECT_NAME}_SOURCE_DIR}/cmake
)
include( Version )
include( Initialize )
include_directories( ${${CMAKE_PROJECT_NAME}_SOURCE_DIR}/src )

# ------------------------
# Set up external packages
# ------------------------
include( SetupBoost )

# ---------------
# Set up testing
# ---------------
enable_testing()

# -----------------
# Set up packaging
# -----------------
include( cmake/Package.cmake )

# -----------------------
# Traverse subdirectories
# -----------------------
add_subdirectory( scripts )
add_subdirectory( src )
