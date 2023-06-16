
#include <string>

template<typename Map>
void print_map(const Map &map, const std::string key_desc = "key",
                               const std::string value_desc = "value")
{
    for_each(map.begin(), map.end(), /* something */ );
}

We need (c++03)
    - something that is callable (operator())
    - A way to capture the key_desc and value_desc


