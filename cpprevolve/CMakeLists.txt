# CMake Required Version
cmake_minimum_required (VERSION 3.7.0)

# Project name
project (Revolve)
set (CMAKE_CXX_STANDARD 17)

# Include cmake subdirectories
add_subdirectory(revolve/brains)

if (NOT BUILD_ONLY_BRAIN)
    add_subdirectory(revolve/gazebo)
endif()

if (BUILD_RASPBERRY)
    add_subdirectory(revolve/raspberry)
endif()
