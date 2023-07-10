
constexpr double calculate_pi() {
    return 22/7;
}

constexpr auto pi = calculate_pi();

int main()
{
    const auto radius = 1.5;
    const auto area = pi * radius * radius;
    std::cout << area;

}

Automatic deduction of value types. Standard c++11

constexpr auto calculate_pi() { // Return type deduction 
                                // for normal functions.
    return 22/7;
}

constexpr auto pi = calculate_pi();

int main()
{
    const auto radius = 1.5;
    const auto area = pi * radius * radius;
    std::cout << area;
}

// const auto
const auto result = std::count( /*stuff */);

or, if you prefer:
// auto const

auto const result = std::count( /*stuff*/ );

