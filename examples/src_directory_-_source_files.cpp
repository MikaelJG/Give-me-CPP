
#pragma once

class Blah {
    public:
        void boo(); // declaring function boo in header
}


#include "blah.h"
#include <iostream>

void Blah::boo() {
    std::cout << "Boo!\n"; // defining function boo in src file
}


add_executable(hello main.cpp src/Blah.cpp) // added here


file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(hello main.cpp ${SRC_FILES})

