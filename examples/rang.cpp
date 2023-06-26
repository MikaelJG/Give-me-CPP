

for (const auto &element : container) {
    // eliminates both other problems
}

for (int element : first_three_multiples(8)) {
 std::cout << element << "\n";
}
std::string str = "Hello";
for (char character : str) {
    std::cout << character << std::endl;
}

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (const auto &data : map)
    {
        std::cout << key_desc << ": '" << data_itr->first << "' "
                  << value_desc << ": '" << data_itr->second << "'\n";
    }
}

for (const auto &value : container) {} // for each element in the container

standard c++11

Never mutate the container itself while iterating inside of a ranged-for loop. 
Use clang-tidy's modernize-loop-convert check. Not using auto eases silent mistakes in your code.

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (const auto &data : map)
    {
        std::cout << key_desc << ": '" << data.first << "' "
                  << value_desc << ": '" << data.second << "'\n";
    }
}

// if only there was some way to make this data.first, data.second nonsense more readable!!



for (const auto &element : container) {
    // eliminates both other problems
}

for (int element : first_three_multiples(8)) {
 std::cout << element << "\n";
}
std::string str = "Hello";
for (char character : str) {
    std::cout << character << std::endl;
}

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (const auto &data : map)
    {
        std::cout << key_desc << ": '" << data_itr->first << "' "
                  << value_desc << ": '" << data_itr->second << "'\n";
    }
}

for (const auto &value : container) {} // for each element in the container

standard c++11

Never mutate the container itself while iterating inside of a ranged-for loop. 
Use clang-tidy's modernize-loop-convert check. Not using auto eases silent mistakes in your code.

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (const auto &data : map)
    {
        std::cout << key_desc << ": '" << data.first << "' "
                  << value_desc << ": '" << data.second << "'\n";
    }
}

// if only there was some way to make this data.first, data.second nonsense more readable!!

