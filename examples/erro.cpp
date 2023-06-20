
int main() {
    std::string cmd = "ls -l";
    int result = system(cmd.c_str());  // Pass C-string to system()

    if (result == 0) {
        std::cout << "Command executed successfully." << std::endl;
    } else {
        std::cout << "Command execution failed." << std::endl;
    }
    return 0;
}


int main() {
    std::string cmd = "ls -l";
    int result = system(cmd.c_str());  // Pass C-string to system()

    if (result == 0) {
        std::cout << "Command executed successfully." << std::endl;
    } else {
        std::cout << "Command execution failed." << std::endl;
    }
    return 0;
}

