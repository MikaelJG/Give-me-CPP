
std::cout << "Enter your password: ";
std::cin >> password;

#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    std::string answer;
    std::cout << "Place the output in" << output_dir << "? [y/yes, n/no]: ";
    std::cin >> answer;

    if (answer == "y" || answer == "yes") {
    } else if (answer == "n" || answer == "no") {
    } else {
        std::cout << "Invalid response, exiting";
        std::exit(0) (success)
        std::exit(1) (failure)
        
    }

    return 0;
}

