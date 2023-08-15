#include <iostream>
#include <array>
#include <unordered_map>
#include <vector>
#include <filesystem>

int main() {

    // ~ is not valid for fs::directory iterator(path)) 
    const char* tmp = std::getenv("HOME");
    const auto home = std::string(tmp);

    std::unordered_map<std::string, std::string> keywords_map{ 
        // section name, path
        
        // conditional
        {"if", home + "/code/cpp/examples/if.cpp"}, // ./path/to/if.cpp
        {"else", home + "/code/cpp/examples/if.cpp"},
        {"elsif", home + "/code/cpp/examples/if.cpp"},
        {"elseif", home + "/code/cpp/examples/if.cpp"},
        {"else if", home + "/code/cpp/examples/if.cpp"},

        // loop
        {"iteration", home + "/code/cpp/examples/loop.cpp"},
        {"iterate", home + "/code/cpp/examples/loop.cpp"},
        {"iterator", home + "code/cpp/examples/loop.cpp"},
        {"iterators", home + "code/cpp/examples/loop.cpp"},
        {"iterating", home + "code/cpp/examples/loop.cpp"},

        // switch
        {"case", home + "path/to/switch.cpp"},
        {"switch statement", home + "path/to/switch.cpp"},
        {"case statement", home + "path/to/switch.cpp"},
        {"switchstatement", home + "path/to/switch.cpp"},
        {"casestatement", home + "path/to/switch.cpp"},

        // variables
        // touples
        // enums
        // array
        // vector
        // insert
        // size
        // push_back
        // static_cast
        // iteration over a container
        // size_t
        // user input
        // range
        // range pipes
        // function
        // inline function
        // member function
        // public
        // overloading
        // parameters
        // pass by value
        // pass by reference
        // const
        // constexpr
        // auto
        // pointer
        // null pointer
        // nullptr
        // class
        // constructor
        // destructor
        // automatic destructor
        // object lifetime
        // automatic
        // thread local
        // static
        // dynamic
        // determinism
        // span
        // struct
        // template
        // variadic template
        // lambda
        // capture
        // generic lambda
        // concept
        // memory allocation
        // factory
        // fmt
        // string view
        // argument
        // ternary operator
        // scope
        // chaining
        // sstream
        // compiler
        // clang
        // gnu
        // library
        // linker
        // build
        // warning
        // standard
        // PCH (precompiled headers)
        // filesystem
        // paths
        // files
        // directory
        // maps
        // multimaps
        // set
        // multiset
        // list
        // forward list
        // hash maps
        // unordered map
        // unordered multimap
        // queue
        // priority queue (heap)
        // stack
        // trie
        // algorithm
        // accumulate
        // puts
        //
        //
//     std::string keyword = "else";
//     if (keywordToFilePath.find(keyword) != keywordToFilePath.end()) {
//         std::string filePath = keywordToFilePath[keyword];
//         std::cout << "Opening: " << filePath << std::endl;
//     } else {
//         std::cout << "Keyword not found!" << std::endl;
//     }
    };

    for (const auto & pair : keywords_map) {
        std::cout << "key: " << pair.first << '\n';
        std::cout << "value: " << pair.second << '\n'; 
    }

    if (keywords_map.count("iterate") > 0) {
        std::cout << "found elseif\n";

        // open nvim
        const std::string tmp = "nvim " + keywords_map["iterate"];
        const auto open_nvim = tmp.c_str();

        std::system(open_nvim);
    }

}
