
std::cout << "Enter your password: ";
std::cin >> password;

#include <cstdlib>
std::string answer;
std::cout << "Place the output in" << output_dir << "? [y/yes, n/no]: ";
std::cin >> answer;

if (answer == "y" || answer == "yes") {
} else if (answer == "n" || answer == "no") {
} else {
    std::cout << "Invalid response, exiting";
    std::exit(1) // (failure)
}

