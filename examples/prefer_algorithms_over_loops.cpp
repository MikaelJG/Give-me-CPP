
// Algorithms end game (before C++20)

const auto has_value
    = std::any_of(begin(container), end(container), 
            greater_than(12));

// Algorithm end game (c++20)

const auto has_value
    = std::any_of(container, greater_than(12));

Next time you are reading through a loop in your codebase,
cross-reference it with the C++ <algorithm> header²
and try to find an algorithm that applies instead.

https://en.cppreference.com/w/cpp/algorithm


// Algorithms end game (before C++20)

const auto has_value
    = std::any_of(begin(container), end(container), 
            greater_than(12));

// Algorithm end game (c++20)

const auto has_value
    = std::any_of(container, greater_than(12));

Next time you are reading through a loop in your codebase,
cross-reference it with the C++ <algorithm> header²
and try to find an algorithm that applies instead.

https://en.cppreference.com/w/cpp/algorithm

