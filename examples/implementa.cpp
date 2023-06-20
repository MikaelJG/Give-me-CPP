
#include <iostream>
#include <string>

struct Map_Value_Printer {
    Map_Value_Printer(const std::string &key_desc,
                      const std::string &value_desc) // Capture
        : m_key_desc(key_desc), m_value_desc(value_desc)
        {}

    template<typename Value>
    void operator()(const Value &value) { // Callable
    std::cout << m_key_desc << ": '" << value.first << "' "
              << m_value_desc << ": '" << value.second << "'\n";
    }

    const std::string &m_key_desc; // capture values
    const std::string &mP_value_desc;
};

template<typename Map>
void print_map(const Map &map, const std::string key_desc = "key",
                               const std::string value_desc = "value")

{
    for_each(map.begin(), map.end(), Map_Value_Printer(key_desc, value_desc));
}

//////
IF ONLY THERE WAS A WAY OF CREATING A CALLABLE THING FOR USE WITH AN ALGORITHM......
//////

