

for (const auto &element : container) {}

std::string str = "Hello";
for (char character : str) {
    std::cout << character << '\n';
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

Use clang-tidy's modernize-loop-convert check.

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



for (const auto &element : container) {}

std::string str = "Hello";
for (char character : str) {
    std::cout << character << '\n';
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

Use clang-tidy's modernize-loop-convert check.

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

