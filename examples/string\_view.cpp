
#include <string_view>
std::string_view sv{some_string_like_thing}; // no copy

Standard c++17

These are passed-by-value on purpose.
String_view are cheap to copy. It is recommended to pass them by value.
The following code doesn't create a string anymore, if doesn't have to.

# include <iostream>
# include <string>

void print_map(const auto &map, const std::string_view &key_desc = "key",
                                const std::string_view &value_desc = "value")
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


\subsection{Cout}

Std::Cout is quite verbose, relatively slow and difficult to reason about. 


If only there was some easier way of formatting our output...

Puts (algorithm)

