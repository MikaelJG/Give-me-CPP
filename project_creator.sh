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
# mkdir build include test ;
#
# Create a CMakeList.txt file
#
# echo "
# cmake_minimum_required(VERSION 3.10)
# set(CMAKE_CXX_STANDARD 17)  
# set(CMAKE_CXX_STANDARD_REQUIRED ON)  
#
# project(name-of-project VERSION 1.0)
# add_executable (name-of-project main.cpp)
# 
# target_include_directories(name-of-project PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
# # include is for header files (standard)
#
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
#       inline void boo() {
#           std::cout << "This Blah.h" << <'\n';
#        
#       }
#
#
# };
#
#
# " >> Blah.h
#
# Run cmake from the cmd line, specify a directory
#
# cmake . && make && ./hello
#
# 
