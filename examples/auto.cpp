
# include <string>

// C++20's auto concept or further constrained to something that
// has values that can be destructured into 2 elements.

void print_map(const auto &map, const std::string &key_desc = "key",
                                const std::string &value_desc = "value")
{
    for (const auto &[key, value] : map) /// strucuted binding
    {
        std::cout << key_desc << ": '" << key << "' "
                  << value_desc << ": '" << value << "'\n";
    }
}

// implicitely created a template for us. Just like our lamdas did!


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


\subsection{Familiarize Yourself with Auto Deduction}

\subsubsection{What is the type of val?}


const int *get();

int main() {
    const auto val = get();
}

