
  std::exit(0) (success)
  std::exit(1) (failure)

  int isPrime(int x) {
    if (x % 2 == 1) {
        return 0; // is considered as false
                  // Yet, is it not the same as the boolean false
                  // In a boolean context, 
                  // 0 is implicitly converted to false,
                  // However, not equivalent in all contexts.
    }
  }

Void, Also refered as subroutine.

void oscar_wilde_quote() {
  std::cout << "The highest";
}

#include <vector>

template <typename T>
struct ComplexType {
    T value;
    std::vector<T> elements;

    ComplexType(T val) : value(val) {} // constructor

    void print() {
        std::cout << "Value: " << value << std::endl;
        std::cout << "Elements:";
        for (const auto& elem : elements) {
            std::cout << " " << elem;
        }
        std::cout << std::endl;
    }
};

template <typename T>
ComplexType<T> createComplexType(T value, const std::vector<T>& elements) {
    ComplexType<T> complex(value);
    complex.elements = elements;
    return complex;
}

int main() {
    std::vector<int> elements{1, 2, 3, 4, 5};
    ComplexType<int> result = createComplexType(10, elements);
    result.print();

    return 0;
}



A template struct `ComplexType` represents a complex type with a value and a vector of elements. 
The `createComplexType` function creates an instance of `ComplexType` by taking a value and a vector of elements
as parameters. The function initializes a `ComplexType` object, sets its elements, and returns it. 
Finally, in the `main` function, we call `createComplexType` and print the resulting complex type.

\section{Booxy}


#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include <cstring>
#include <algorithm>
#include <filesystem>
namespace fs = std::filesystem;

void copyLatex(std::string path, std::string endPath, std::vector<std::string> files) {
    for (const auto & entry : fs::directory_iterator(path))
        files.push_back(entry.path());

    for (int i = 0; i < files.size(); i++) {
        if (files[i].substr(files[i].find_last_of(".") + 1) == "tex") {
            std::string cmd = "cp " + files[i] + " " + endPath; // relative paths still
            system(cmd.c_str());
        }
    }
}

void createLatex(std::string path) {
    for (const auto & entry : fs::directory_iterator(path)) {
        std::string cstr = entry.path().c_str();
        std::string latex_cmd = "pdflatex " + cstr;
        system(latex_cmd.c_str());
    }
}

std::string getParentDirectory(std::string path) {
    size_t found = path.find_last_of("/\\");
    if (found != std::string::npos) {
        return path.substr(0, found);
    }
    return "";
}

bool hasFlag(const std::vector<std::string>& arguments, const std::string& flag) {
    return std::find(arguments.begin(), arguments.end(), flag) != arguments.end();
}

int main(int argc, char* argv[]) {
    std::vector<std::string> arguments(argv + 1, argv + argc);

    for (int i = 0; i < arguments.size(); i++) {
        std::cout << arguments[i] << '\n';
    }

    if (hasFlag(arguments, "-o")) {
        std::cout << "Flag -o for -omit is present!" << std::endl;
    }

    // relative paths
    std::string programPath = argv[0];
    std::string parentDirectory = getParentDirectory(programPath);
    std::string chapOnePath = parentDirectory + "/chap_1";
    std::string chapTwoPath = parentDirectory + "/chap_2";
    std::string chapThreePath = parentDirectory + "/chap_3";
    std::string chapFourPath = parentDirectory + "/chap_4";
    std::string latexPath = parentDirectory + "/latex";
    std::string pdfPath = parentDirectory + "/pdf";
    std::string completePath = parentDirectory + "/complete";

    std::vector<std::string> texFiles = {};

    copyLatex(chapOnePath, latexPath, texFiles);
    copyLatex(chapTwoPath, latexPath, texFiles);
    copyLatex(chapThreePath, latexPath, texFiles);
    copyLatex(chapFourPath, latexPath, texFiles);

    createLatex(latexPath);

    return 0;
}

