
auto lambda = [/*captures*/](int param1){ return param1 * 10; };

standard c++11
                    *** 

#include <iostream>
#include <string>

template<typename Map>
void print_map(const Map &map, const std::string key_desc = "key",
                               const std::string value_desc = "value")
{
    for_each(begin(map), end(map),
        [&](const typename Map::value_type &data) { /// lambda! This is too wordy
            std::cout << key_desc << ": '" << data.first << "' "
                      << value_desc << ": '" << data.second << "'\n";
            }
    );

/// If only there was some way to automatically deduce the types of lambda parameter!!!
}


auto lambda = [/*captures*/](int param1){ return param1 * 10; };

standard c++11
                    *** 

#include <iostream>
#include <string>

template<typename Map>
void print_map(const Map &map, const std::string key_desc = "key",
                               const std::string value_desc = "value")
{
    for_each(begin(map), end(map),
        [&](const typename Map::value_type &data) { /// lambda! This is too wordy
            std::cout << key_desc << ": '" << data.first << "' "
                      << value_desc << ": '" << data.second << "'\n";
            }
    );

/// If only there was some way to automatically deduce the types of lambda parameter!!!
}

