
#include <format>
#include <string_view>

void print_map(const auto &map, const std::string_view &key_desc = "key",
                                const std::string_view &value_desc = "value")
{
    const auto print_key_value = [&](const auto &data) { 
        const auto &[key, value] = data;
        std::puts(std::format("{}: '{}' {}: '{}'",
                         key_desc, key, value_desc, value).c_str());
    };

    for_each(begin(map), end(map), print_key_value);
}

// if only there was some way to not have to do this begin(map) and end(map)!!!

Auto Concept in c++20

#include <array>

auto get_data(const auto & ... params)
{
    return std::array{params...};
}

// The only problem now is that this code requires the types to be copyable.
// If only there was a way to forward arguments and avoid copies......

