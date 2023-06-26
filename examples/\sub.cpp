
    the size of the array is now known at compile time
    We've removed dynamic allocations
    We no longer pay the cost of accessing a static

    " when you see a const, always ask yourself: "is this value known at compile time? 
    If it is, what would it take to make the value constexpr?" 


\subsection{What is a const char?}


#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
    fs::path path = "your_directory_path";

    for (const auto &entry : fs::directory_iterator(path)) {
        const char *cstr = entry.path().c_str();
        std::cout << cstr << '\n';
    }
    return 0;
}


    the size of the array is now known at compile time
    We've removed dynamic allocations
    We no longer pay the cost of accessing a static

    " when you see a const, always ask yourself: "is this value known at compile time? 
    If it is, what would it take to make the value constexpr?" 


\subsection{What is a const char?}


#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
    fs::path path = "your_directory_path";

    for (const auto &entry : fs::directory_iterator(path)) {
        const char *cstr = entry.path().c_str();
        std::cout << cstr << '\n';
    }
    return 0;
}

