#
# compile and run automatically (with one command)
#
## first, cmake generates make files
## second, make runs the make files & creates an executable
## ./hello, run the executable 
#
#
# test automatically (with one command)
# build automatically (get all dependencies)
#
################################################################ 
#
# Create project achitecture (tree)
#
# mkdir build include test src ;
#
# Create a CMakeList.txt file
#
# echo "
# cmake_minimum_required(VERSION 3.10)
# set(CMAKE_CXX_STANDARD 17)  
# set(CMAKE_CXX_STANDARD_REQUIRED ON)  
#
# project(name-of-project VERSION 1.0)
# 
# target_include_directories(name-of-project PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
# # include is for header files (standard)
#
#
#file(GLOB_RECURSE SRC_FILES src/*.cpp)
## glob all .cpp files in src directory
#
# add_executable (name-of-project main.cpp ${SRC_FILES})
## add all .cpp files in src to executable
#
# " >> CMakeList.txt
#
# Create a header file in the include directory
#
# echo "
# #pragma once
# #include <iostream>
#
# class Blah {
#   public:
#       void boo();
# }; " >> ./include/Blah.h
# # Declarations here, in header file Blah.h
#
# echo "
# #include "blah.h"
# #include <iostream>
# void Blah::boo() {
#   std::cout << "This Blah.cpp" << '\n';
# }
#
#
# " >> ./src/Blah.cpp
# # Declared in header file Blah.h
# # Defined here in blah source file, Blah.cpp
#
#
# Run cmake from the cmd line, specify a directory
#
# cmake . && make && ./hello
#
# 
