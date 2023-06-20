
// C++17 // g++ -std=c++17 myfile.cpp -o output-name

#include <string>
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

int main()
{
    std::string path = "./foo";
    for (const auto &entry : fs::directory_iterator(path))
        std::cout << entry.path() << std::endl;
}

&entry : fs::directory_iterator(path)
& creates a reference to the elements of the fs::directory_iterator object.

In C++, using a reference (&) instead of making a copy of the elements is more efficient,
especially when dealing with large objects or containers. 
By using a reference, the loop avoids creating a new copy of each element
, reducing unnecessary memory usage and improving performance.


// C++17 // g++ -std=c++17 myfile.cpp -o output-name

#include <string>
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

int main()
{
    std::string path = "./foo";
    for (const auto &entry : fs::directory_iterator(path))
        std::cout << entry.path() << std::endl;
}

&entry : fs::directory_iterator(path)
& creates a reference to the elements of the fs::directory_iterator object.

In C++, using a reference (&) instead of making a copy of the elements is more efficient,
especially when dealing with large objects or containers. 
By using a reference, the loop avoids creating a new copy of each element
, reducing unnecessary memory usage and improving performance.

