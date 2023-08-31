
std::map<std::string, int> wordfreq;
std::istringstream iss(text);
std::string word;

while (iss >> word) {
    wordfreq[word]++;
}

