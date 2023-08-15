#include <iostream>
#include <array>
#include <unordered_map>
#include <vector>

int main() {

    // ~ is not valid for fs::directory iterator(path)) 
    const char* tmp = std::getenv("HOME");
    const auto home = std::string(tmp);

    std::unordered_map<std::string, std::string> keywords_map{ 

        // refer to Table of Content
        // section name, path
        
        // format 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        
        // variables
        {"var", home + "/code/cpp/examples/variables.cpp"}, 
        {"vars", home + "/code/cpp/examples/variables.cpp"}, 
        {"variable", home + "/code/cpp/examples/variables.cpp"},
        {"variables", home + "/code/cpp/examples/variables.cpp"},

        
        // touples
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        
        // enums
        {"", home + "/code/cpp/examples/enums.cpp"}, 
        {"", home + "/code/cpp/examples/enums.cpp"}, 
        {"", home + "/code/cpp/examples/enums.cpp"},
        {"", home + "/code/cpp/examples/enums.cpp"},
        
        // arrays
        {"arr", home + "/code/cpp/examples/arrays.cpp"}, 
        {"array", home + "/code/cpp/examples/arrays.cpp"}, 
        {"arra", home + "/code/cpp/examples/arrays.cpp"},

        // vector
        {"vec", home + "/code/cpp/examples/vectors.cpp"}, 
        {"vect", home + "/code/cpp/examples/vectors.cpp"}, 
        {"vectors", home + "/code/cpp/examples/vectors.cpp"},

        // size_t 
        {"sizet", home + "/code/cpp/examples/size_t.cpp"}, 
        {"sizt", home + "/code/cpp/examples/size_t.cpp"}, 
        {"st", home + "/code/cpp/examples/size_t.cpp"},
        
        // conditional
        {"if", home + "/code/cpp/examples/conditionals.cpp"}, 
        {"elseif", home + "/code/cpp/examples/conditionals.cpp"}, 
        {"else if", home + "/code/cpp/examples/conditionals.cpp"},
        {"elsif", home + "/code/cpp/examples/conditionals.cpp"},
        {"con", home + "/code/cpp/examples/conditionals.cpp"},
        {"cond", home + "/code/cpp/examples/conditionals.cpp"},
        {"condition", home + "/code/cpp/examples/conditionals.cpp"}, 
        {"conditions", home + "/code/cpp/examples/conditionals.cpp"},
        {"conditional", home + "/code/cpp/examples/conditionals.cpp"}, 

        // switch
        {"case", home + "/code/cpp/examples/switch_statements.cpp"},
        {"casestatement", home + "/code/cpp/examples/switch_statements.cpp"},
        {"case statement", home + "/code/cpp/examples/switch_statements.cpp"},
        {"switch", home + "/code/cpp/examples/switch_statements.cpp"},
        {"switchstatement", home + "/code/cpp/examples/switch_statements.cpp"},
        {"switch statement", home + "/code/cpp/examples/switch_statements.cpp"},

        // loop
        {"iteration", home + "/code/cpp/examples/loop.cpp"},
        {"iterate", home + "/code/cpp/examples/loop.cpp"},
        {"iterator", home + "code/cpp/examples/loop.cpp"},
        {"iterators", home + "code/cpp/examples/loop.cpp"},
        {"iterating", home + "code/cpp/examples/loop.cpp"},

        // range
        // range pipes

        // insert
        // size
        // push_back
        // static_cast
        // iteration over a container
        // size_t
        // user input
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
