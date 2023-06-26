
    Create (Insert):
        Inserting a key-value pair: map[key] = value or map.insert(std::make_pair(key, value))

    Read (Retrieve):
        Accessing a value by key: value = map[key]
        Checking if a key exists: map.count(key)

    Update (Modify):
        Modifying the value associated with a key: map[key] = new_value

    Delete (Erase):
        Removing a key-value pair by key: map.erase(key)
        Removing all elements: map.clear()

#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> map;

    // Create (Insert)
    map[1] = "Apple";
    map.insert(std::make_pair(2, "Banana"));

    // Read (Retrieve)
    std::cout << "Value at key 1: " << map[1] << std::endl;
    std::cout << "Key 2 exists? " << (map.count(2) ? "Yes" : "No") << std::endl;

    // Update (Modify)
    map[1] = "Apricot";

    // Delete (Erase)
    map.erase(2);

    // Display all key-value pairs
    for (const auto& pair : map) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}


    Create (Insert Key-Value Pair):
        map[key] = value 
        map.insert(std::make_pair(key, value))

    Read (Retrieve a value by key):
        Value = map[key]
        Checking if a key exists: map.count(key)

    Update (Modify the value of a key):
        map[key] = new_value

    Delete (Remove a key-value pair):
        map.erase(key)
        Removing all elements: map.clear()

#include <map>

int main() {
    std::map<int, std::string> map;

    // Create (Insert)
    map[1] = "Apple";
    map.insert(std::make_pair(2, "Banana"));

    // Read (Retrieve)
    std::cout << "Value at key 1: " << map[1];
    std::cout << "Key 2 exists? " << (map.count(2) ? "Yes" : "No");

    // Update
    map[1] = "Apricot";

    // Delete
    map.erase(2);

    // Display all key-value pairs
    for (const auto& pair : map) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}

