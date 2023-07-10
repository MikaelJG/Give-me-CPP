#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Provide the name of the project as argument"
    exit
fi

name_of_project=$1

################################################################ 

# Compile and run automatically (with one command)

################################################################ 

# Create an automatic compile tool

################################################################ 

echo "g++ -Wall -std=c++17 $name_of_the_project.cpp -o $name_of_the_project
" >> compile.sh && chmod -x compile.sh

#
#
#
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
mkdir build include src ;
#
# Create a CMakeList.txt file
# Order of command matters here. 
#
echo "
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)  
set(CMAKE_CXX_STANDARD_REQUIRED ON)  

project(name-of-project VERSION 1.0)

add_executable (name-of-project src/main.cpp \${SRC_FILES})
# add all .cpp files in src to executable

target_include_directories(name-of-project PUBLIC \${CMAKE_CURRENT_SOURCE_DIR}/include)
# include is for header files (standard)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
# glob all .cpp files in src directory
" >> CMakeLists.txt
#
# Create a header file in the include directory
#
echo "
#pragma once

class Blah {
  public:
      void boo();
}; " >> ./include/Blah.h
# Declarations here, in header file Blah.h

#
# Create a source file for the class Blah in the src directory
#
echo ' 
#include "blah.h"
#include <iostream>

// function boo of class Blah
void Blah::boo() {
  std::cout << "This Blah.cpp" << "\n";
} ' >> ./src/Blah.cpp
# Declared in header file Blah.h
# Defined here in blah source file, Blah.cpp

#
# Create a main.cpp src directory
#
echo ' 
#include <iostream>
int main() {
    std::cout << "This main.cpp" << "\n"; 
    return 0;
}' >> ./src/main.cpp

# Have all cmake generated files in the build directory, 
# then call make ../ from the build directory.

cd build; cmake ../

# Run cmake from the cmd line, specify a directory
# 
cmake . && make
#
