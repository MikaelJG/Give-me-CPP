
std::vector<std::string> dna = {"ATG", "ACG"};
dna.push_back("GTG"); // GTG added
std::cout << dna[2] << "\n"; // GTG

dna.pop_back(); // GTG has been removed

int main() {
    // int arr[5] = {1, 2, 3, 4, 5}; // c-styled array
    std::array <int, 5> arr = {1, 2, 3, 4, 5};  
    std::array <int, 5> arr{1, 2, 3, 4, 5}; // all compiling

    int size = sizeof(arr) / sizeof(arr[0]);

    // Example with vector
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int newValue = 6;

    // Push the new value to the vector
    vec.push_back(newValue);

    // Display the updated vector
    std::cout << "Updated vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}


