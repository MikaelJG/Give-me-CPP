
#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include <cstring>
#include <algorithm>
#include <filesystem>
namespace fs = std::filesystem;

void CopyTex(std::string path, std::string endPath, std::vector<std::string> files) {
    for (const auto & entry : fs::directory_iterator(path))
        files.push_back(entry.path());

    for (int i = 0; i < files.size(); i++) {
        if (files[i].substr(files[i].find_last_of(".") + 1) == "tex") {
            std::string cmd = "cp " + files[i] + " " + endPath; // relative paths still
            system(cmd.c_str());
        }
    }
}

void PdfLatex(std::string path) {
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

    CopyTex(chapOnePath, latexPath, texFiles);
    CopyTex(chapTwoPath, latexPath, texFiles);
    CopyTex(chapThreePath, latexPath, texFiles);
    CopyTex(chapFourPath, latexPath, texFiles);

    PdfLatex(latexPath);

    return 0;
}


\section{Good practices}

\subsection{Proper Design}


    if a component is hard to test, it is not properly designed. 
    if a component is easy to test, it indicates proper design. 
    Approval tests ressource : https://cppcast.com/clare-macrae/ 

