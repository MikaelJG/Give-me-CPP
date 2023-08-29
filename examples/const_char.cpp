
#include <filesystem>
namespace fs = std::filesystem;

fs::path path = "your_directory_path";

for (const auto &entry : fs::directory_iterator(path)) {
    const char *cstr = entry.path().c_str();
    std::cout << cstr << '\n';
}

