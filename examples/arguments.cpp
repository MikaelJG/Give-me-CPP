
#include <iostream>

int main(int argc, char* argv[]) { // arg count, char* ?
    std::cout << "Number of arguments: " << argc << std::endl;
    std::cout << "Arguments:" << std::endl;
    for (int i = 0; i < argc; i++) {
        std::cout << " " << argv[i] << std::endl;
    }
    return 0;
}

