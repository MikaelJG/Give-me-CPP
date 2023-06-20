
// C++17 // g++ -std=c++17 myfile.cpp -o output-name

#include <filesystem>
namespace fs = std::filesystem;

int main()
{
    std::string path = "./foo";
    for (const auto &entry : fs::directory_iterator(path))
        std::cout << entry.path() << std::endl; // valid single statement synthax
                                                // If no optional block
                                                // only the statement following
                                                // the loop construct is executed.
}

&entry : fs::directory_iterator(path)
& creates a reference to the elements of the fs::directory_iterator object.


