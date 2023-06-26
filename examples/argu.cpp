
#include <iostream>

int main(int argc, char* argv[]) { // arg count, char* ?
    std::cout << "Number of arguments: " << argc << std::endl;
    std::cout << "Arguments:" << std::endl;
    for (int i = 0; i < argc; i++) {
        std::cout << " " << argv[i] << std::endl;
    }
    return 0;
}


#include <iostream>

int main(int argc, char* argv[]) {

    return 0;
}


\section{Synthax}
\subsection{Ternary Operator}

std::cout << (coin == 0 ? "Heads" : "Tails") << "\n";

