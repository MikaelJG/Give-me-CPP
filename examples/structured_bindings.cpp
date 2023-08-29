
const auto &[elem1, elem2] = some_thing;

Standard c++17

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (const auto &[key, value] : map) // structured binding
    {
        std::cout << key_desc << ": '" << key << "' "
                  << value_desc << ": '" << value << "'\n";
    }
}


const auto &[elem1, elem2] = some_thing;

Standard c++17

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (const auto &[key, value] : map) // structured binding
    {
        std::cout << key_desc << ": '" << key << "' "
                  << value_desc << ": '" << value << "'\n";
    }
}

