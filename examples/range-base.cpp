
for (const auto &value : container) {
    // loops over each element in the container
}

standard c++11

            *** 
# include <iostream>
# include <string>

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


for (const auto &value : container) {
    // loops over each element in the container
}

standard c++11

            *** 
# include <iostream>
# include <string>

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

