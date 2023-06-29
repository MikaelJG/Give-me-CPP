
old c++ implementation, using type\_traits.

#include <type_traits>

template<typename T,
         typename std::enable_if<std::is_floating_point<T>::value, int>::type = 0>
auto func(T f) -> decltype(f * 3) { return f * 3; }

template<typename T,
         typename std::enable_if<std::is_integral<T>::value, int>::type = 0>
auto func(T i) -> decltype(i + 3) { return i + 3; }

c++17 implementation, using type\_traits still.
#include <type_traits>

template<typename T,
         std::enable_if_t<std::is_floating_point_v<T>, int> = 0>
auto func(T f) { return f * 3; }

template<typename T,
         std::enable_if_t<std::is_integral_v<T>, int> = 0>
auto func(T i) { return i + 3; }

C++20 implementation using concepts, 

#include <concepts>

auto func(std::floating_point auto f) { return f * 3; }
auto func(std::integral auto i) { return i + 3; }

