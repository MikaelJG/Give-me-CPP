
#include <map>
#include <sstream>

int main() {
    std::string text = "lorem";

    for (char& c : text) {
        c = std::tolower(c);
    }

    std::map<std::string, int> wordfreq;
    std::istringstream iss(text);
    std::string word;

    while (iss >> word) { // count frequency
        wordfreq[word]++;
    }

    for (const auto& pair : wordfreq) { // display
        std::cout << pair.first << ": " << pair.second;
    }

    return 0; // return success
}


#include <map>
#include <sstream>

int main() {
    std::string text = "lorem";

    for (char& c : text) {
        c = std::tolower(c);
    }

    std::map<std::string, int> wordfreq;
    std::istringstream iss(text);
    std::string word;

    while (iss >> word) { // count frequency
        wordfreq[word]++;
    }

    for (const auto& pair : wordfreq) { // display
        std::cout << pair.first << ": " << pair.second;
    }

    return 0; // return success
}

