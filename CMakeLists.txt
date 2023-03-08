cmake_minimum_required(VERSION 3.17)

project(
  "MLNN"
  VERSION 0.1.0
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_definitions("-Wall -lstdc++fs -O3")
# ##############################################################################
# Modules and scripts   ##
# ##############################################################################

# Standard CMake modules

include(InstallRequiredSystemLibraries)
include(CMakePackageConfigHelpers)

add_subdirectory(include)
# add_subdirectory(source)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE Vec3D Vec2D Math MatrixNxN
                                              MatrixMxN)
