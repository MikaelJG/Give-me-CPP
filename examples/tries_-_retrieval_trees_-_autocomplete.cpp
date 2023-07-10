
#include <unordered_map>

class TrieNode {
public:
    bool isEndOfWord;
    std::unordered_map<char, TrieNode*> children;

    TrieNode() : isEndOfWord(false) {}
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(const std::string& word) {
        TrieNode* curr = root;
        for (char c : word) {
            if (curr->children.find(c) == curr->children.end()) {
                curr->children[c] = new TrieNode();
            }
            curr = curr->children[c];
        }
        curr->isEndOfWord = true;
    }

    bool search(const std::string& word) {
        TrieNode* curr = root;
        for (char c : word) {
            if (curr->children.find(c) == curr->children.end()) {
                return false;
            }
            curr = curr->children[c];
        }
        return curr->isEndOfWord;
    }
};

int main() {
    Trie trie;
    
    // Insert words into the trie
    trie.insert("apple");
    trie.insert("banana");
    trie.insert("cat");
    trie.insert("dog");
    
    // Search for words in the trie
    std::cout << trie.search("apple") << std::endl;  // Output: 1 (true)
    std::cout << trie.search("banana") << std::endl; // Output: 1 (true)
    std::cout << trie.search("cat") << std::endl;    // Output: 1 (true)
    std::cout << trie.search("dog") << std::endl;    // Output: 1 (true)
    std::cout << trie.search("car") << std::endl;    // Output: 0 (false)

    return 0;
}

