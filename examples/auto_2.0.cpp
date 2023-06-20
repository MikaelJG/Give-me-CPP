
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

