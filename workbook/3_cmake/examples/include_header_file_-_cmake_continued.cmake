
target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

    // Standard is having header files in /include directory!

hello // our target, where to add the stuff from headers
PUBLIC // gives the scope of added stuff from headers. 
       // Public, Private or Interface
       // Usage: when you have cmake library, make sure it is seen by #include in files

cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(hello VERSION 1.0)
add_executable(hello main.cpp)
target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


#pragma once
#include <iostream>

class Blah {
    public:
        inline void boo() {
            std::cout << "Boo!\n";
        }
};

