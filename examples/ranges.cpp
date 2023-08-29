
#include <format>
#include <string_view>

void print_map(const auto &map,
               const std::string_view &key_desc = "key",
               const std::string_view &value_desc = "value")
{
    const auto print_key_value = [&](const auto &data) { 
        const auto &[key, value] = data;
        std::puts(std::format("{}: '{}' {}: '{}'",
                         key_desc, key, value_desc, value).c_str());
    };

    for_each(map, print_key_value);
}

#include <ranges>

int main()
{
    std::vector<int> ints{1, 2, 3, 4, 5};
    auto even = [](int i){ return 0 == i % 2; };
    auto square = [](int i){ return i * i; };
                                              
    for (int i : ints | std::view::filter(even) | std::view::transform(square)) {
        std::cout << i << ' ';
    }
}


#include <format>
#include <string_view>

void print_map(const auto &map,
               const std::string_view &key_desc = "key",
               const std::string_view &value_desc = "value")
{
    const auto print_key_value = [&](const auto &data) { 
        const auto &[key, value] = data;
        std::puts(std::format("{}: '{}' {}: '{}'",
                         key_desc, key, value_desc, value).c_str());
    };

    for_each(map, print_key_value);
}

#include <ranges>

int main()
{
    std::vector<int> ints{1, 2, 3, 4, 5};
    auto even = [](int i){ return 0 == i % 2; };
    auto square = [](int i){ return i * i; };
                                              
    for (int i : ints | std::view::filter(even) | std::view::transform(square)) {
        std::cout << i << ' ';
    }
}

