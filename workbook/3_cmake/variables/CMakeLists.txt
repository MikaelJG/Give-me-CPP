cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

# ALWAYS CREATE THESE VARIABLES IN THE TOP DIRECTORY
# IN THE ROOT CMAKEFILE
# The var will be included in the add_subdirectory chain at the end here.

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(LIBA Library)
set(HE Hello)

# where we used Hello, write ${HE}

option(COMPILE_EXECUTABLE "Whether to compile the executable" OFF)

add_subdirectory(src)

if(COMPILE_EXECUTABLE)
    add_subdirectory(app)
else (
endif()
