
#include <array>

auto get_data(auto && ... params)
{
    return std::array{std::forward<decltype(params)>(params)...};
}

// no unnecessary copies of params, guaranteed copy/move elisions of return value.


#include <array>

auto get_data(auto && ... params)
{
    return std::array{std::forward<decltype(params)>(params)...};
}

// no unnecessary copies of params, guaranteed copy/move elisions of return value.

