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

        // ranges
        // {"", home + "/code/cpp/examples/ranges.cpp"}, 
        // {"", home + "/code/cpp/examples/ranges.cpp"}, 
        // {"", home + "/code/cpp/examples/ranges.cpp"},
        // {"", home + "/code/cpp/examples/ranges.cpp"},
        
        // range pipes
        // {"", home + "/code/cpp/examples/ranges_pipes.cpp"}, 
        // {"", home + "/code/cpp/examples/ranges_pipes.cpp"}, 
        // {"", home + "/code/cpp/examples/ranges_pipes.cpp"},
        // {"", home + "/code/cpp/examples/ranges_pipes.cpp"},
        //
        // function
        // {"", home + "/code/cpp/examples/functions.cpp"}, 
        // {"", home + "/code/cpp/examples/functions.cpp"}, 
        // {"", home + "/code/cpp/examples/functions.cpp"},
        // {"", home + "/code/cpp/examples/functions.cpp"},
        //
        // inline function
        // {"", home + "/code/cpp/examples/inline_functions.cpp"}, 
        // {"", home + "/code/cpp/examples/inline_functions.cpp"}, 
        // {"", home + "/code/cpp/examples/inline_functions.cpp"},
        // {"", home + "/code/cpp/examples/inline_functions.cpp"},
        //
        // member function
        // {"classfun", home + "/code/cpp/examples/member_functions.cpp"}, 
        // {"class function", home + "/code/cpp/examples/member_functions.cpp"}, 
        // {"classfunction", home + "/code/cpp/examples/member_functions.cpp"},
        // {"classfunctions", home + "/code/cpp/examples/member_functions.cpp"},
        // {"", home + "/code/cpp/examples/member_functions.cpp"},
        //
        // public
        // {"pub", home + "/code/cpp/examples/public_functions.cpp"}, 
        // {"pubfun", home + "/code/cpp/examples/public_functions.cpp"},
        // {"public", home + "/code/cpp/examples/public_functions.cpp"}, 
        // {"publicfun", home + "/code/cpp/examples/public_functions.cpp"},
        // {"", home + "/code/cpp/examples/public_functions.cpp"},
        //
        // overloading
        // {"over", home + "/code/cpp/examples/overloading_functions.cpp"}, 
        // {"overfun", home + "/code/cpp/examples/overloading_functions.cpp"}, 
        // {"overfunction", home + "/code/cpp/examples/overloading_functions.cpp"}, 
        // {"overload", home + "/code/cpp/examples/overloading_functions.cpp"}, 
        // {"overloading", home + "/code/cpp/examples/overloading_functions.cpp"},
        // {"overloaded", home + "/code/cpp/examples/overloading_functions.cpp"}, 
        // {"overloading functions", home + "/code/cpp/examples/overloading_functions.cpp"},
        // {"overload functions", home + "/code/cpp/examples/overloading_functions.cpp"},
        // {"overload function", home + "/code/cpp/examples/overloading_functions.cpp"},
        // {"function overload", home + "/code/cpp/examples/overloading_functions.cpp"},
        // {"functionoverload", home + "/code/cpp/examples/overloading_functions.cpp"},
        // {"functionoverloading", home + "/code/cpp/examples/overloading_functions.cpp"},
        // {"fun overload", home + "/code/cpp/examples/overloading_functions.cpp"},
        // {"fun overloading", home + "/code/cpp/examples/overloading_functions.cpp"},
        // {"funoverload", home + "/code/cpp/examples/overloading_functions.cpp"},
        // {"funoverloading", home + "/code/cpp/examples/overloading_functions.cpp"},
        // {"", home + "/code/cpp/examples/overloading_functions.cpp"},
        //
        // parameters
        // {"param", home + "/code/cpp/examples/parameters.cpp"}, 
        // {"params", home + "/code/cpp/examples/parameters.cpp"}, 
        // {"par", home + "/code/cpp/examples/parameters.cpp"}, 
        // {"pars", home + "/code/cpp/examples/parameters.cpp"}, 
        // {"parameter", home + "/code/cpp/examples/parameters.cpp"}, 
        // {"", home + "/code/cpp/examples/parameters.cpp"},
        //
        // pass by value
        // {"passvalue", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        // {"pass value", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        // {"passbyvalue", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        // {"passbyval", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        // {"byvalue", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        // {"byval", home + "/code/cpp/examples/pass_by_value.cpp"}, 
        // {"", home + "/code/cpp/examples/pass_by_value.cpp"},
        //
        // pass by reference
        // {"passreference", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        // {"passingreference", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        // {"passingbyreference", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        // {"passbyreference", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        // {"passbyref", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        // {"passref", home + "/code/cpp/examples/pass_by_reference.cpp"}, 
        // {"byref", home + "/code/cpp/examples/pass_by_reference.cpp"},
        // {"byreference", home + "/code/cpp/examples/pass_by_reference.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"}, 

        // insert
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        //
        // size
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        //
        // push_back
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // static_cast
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // iteration over a container
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // user input
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // const
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // constexpr
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // auto
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // pointer
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // null pointer
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // nullptr
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // pointer or pointer
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // smart pointer
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // class
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // constructor
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // destructor
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // automatic destructor
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // object lifetime
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // automatic
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // thread local
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // static
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // dynamic
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // determinism
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // span
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // struct
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // template
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // variadic template
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // lambda
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // capture
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // generic lambda
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // concept
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // memory allocation
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // factory
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // fmt
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // string view
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // argument
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // ternary operator
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // scope
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // chaining
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // sstream
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // compiler
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // clang
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // gnu
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // library
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // linker
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // build
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // warning
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // standard
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // PCH (precompiled headers)
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"}, 
        // {"", home + "/code/cpp/examples/variables.cpp"},
        // {"", home + "/code/cpp/examples/variables.cpp"},
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
