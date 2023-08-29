
#include <filesystem>
namespace fs = std::filesystem;

int main() {
    std::string path = "./foo";
    for (const auto &entry : fs::directory_iterator(path))
        std::cout << entry.path();
}


#include <filesystem>
namespace fs = std::filesystem;

int main() {
    std::string path = "./foo";
    for (const auto &entry : fs::directory_iterator(path))
        std::cout << entry.path();
}

