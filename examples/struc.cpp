
const auto &[elem1, elem2] = some_thing;

Standard c++17

# include <iostream>
# include <string>

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (const auto &[key, value] : map) /// strucuted binding
    {
        std::cout << key_desc << ": '" << key << "' "
                  << value_desc << ": '" << value << "'\n";
    }
}

Standard c++17


\subsection{Bulky Template Synthax}


#include <string>

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (const auto &[key, value] : map) /// strucuted binding
    {
        std::cout << key_desc << ": '" << key << "' "
                  << value_desc << ": '" << value << "'\n";
    }
}

// If only there was a way to simplify this code......

Potential Inefficiency Hiding

# include <iostream>
# include <string>

void print_map(const auto &map, const std::string &key_desc = "key",
                                const std::string &value_desc = "value")
{
    for (const auto &[key, value] : map) /// strucuted binding
    {
        std::cout << key_desc << ": '" << key << "' "
                  << value_desc << ": '" << value << "'\n";
    }
}

int main()
{
    print_map(get_some_map(), "index", "location");
}

/// Std::String vs Const Char *

We are constructing a std::string from a const char * for no particular reason.

If Only there was a way to observe string-like things without actually constructing a std::string!!...

