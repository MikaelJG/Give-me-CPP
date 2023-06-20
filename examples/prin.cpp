
#include <string>
#include <iostream>

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (typename Map::const iterator data_itr = map.begin();
         data_it != map.end();
         ++data_itr)
    {
       std::cout << key_desc << ": '" << data_itr->first << "' "
                 << value_desc << ": '" << data_itr->second << "'\n";
    }
}

// If only there was a way to make this safer!!
// No raw loops


#include <string>
#include <iostream>

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (typename Map::const iterator data_itr = map.begin();
         data_it != map.end();
         ++data_itr)
    {
       std::cout << key_desc << ": '" << data_itr->first << "' "
                 << value_desc << ": '" << data_itr->second << "'\n";
    }
}

// If only there was a way to make this safer!!
// No raw loops

