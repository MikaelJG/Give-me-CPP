
int main(int argc, char* argv[]) {
    std::vector<std::string> arguments(argv + 1, argv + argc);

    for (int i = 0; i < arguments.size(); i++) {
        std::cout << arguments[i] << " ";
    }

    std::cout << std::endl;
    if (hasFlag(arguments, "-o")) {
    std::cout << "Flag -o for -omit is present!" << std::endl;
}


int main(int argc, char* argv[]) {
    std::vector<std::string> arguments(argv + 1, argv + argc);

    for (int i = 0; i < arguments.size(); i++) {
        std::cout << arguments[i] << " ";
    }

    std::cout << std::endl;
    if (hasFlag(arguments, "-o")) {
    std::cout << "Flag -o for -omit is present!" << std::endl;
}

