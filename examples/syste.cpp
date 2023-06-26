
#include <string>

int main() {
    std::string cmd = "ls -l";
    system(cmd.c_str()); // change to c-string
    return 0;
}


\subsection{Error Handeling - if cmd succeeded}


int main() {
    std::string cmd = "ls -l";
    int result = system(cmd.c_str());  // Pass C-string to system()

    if (result == 0) {
        std::cout << "Command executed successfully." << std::endl;
    } else {
        std::cout << "Command execution failed." << std::endl;
    }
    return 0;
}

