
#include <format>
#include <string_view>

void print_map(const auto &map, const std::string_view &key_desc = "key",
                                const std::string_view &value_desc = "value")
{
    for (const auto &[key, value] : map) /// strucuted binding
    {
        std::puts(std::format("{}: '{}' {}: '{}'",
                         key_desc, key, value_desc, value).c_str());

        // this is genious spacing for readability
    }
}

Standard c++20

