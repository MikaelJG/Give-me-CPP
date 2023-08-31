
#include <iostream>
#include <fstream>
#include <filesystem>

int main(int argc, char* argv[]) {

    std::vector<std::string> arguments(argv + 1, argv + argc);
    const auto first_argument = arguments[0];
    return 0;
}

