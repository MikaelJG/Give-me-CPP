
auto lambda = [/*captures*/](int param1){ return param1 * 10; };

std::vector<int> ints{1, 2, 3, 4, 5};
auto even = [](int i){ return 0 == i % 2; };
auto square = [](int i){ return i * i; }; // this is a lambda!
                                          // it defines an anonymous function
                                          // on the fly.

for (int i : ints | std::view::filter(even) | std::view::transform(square)) {
    std::cout << i << ' ';
}

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

