
#include <iostream>

const double pi = 3.141593;

int main()
{
   const double radius = 1.5;
   const double area = pi * radius * radius;
   std::cout << area;
}
    // is pi known at compile time??

// If only there was some way to make a compile-time constant....


#include <iostream>

constexpr double pi = 3.141593;

int main()
{
   const double radius = 1.5;
   const double area = pi * radius * radius;
   std::cout << area;
}

// OR EVEN, Generate it at compile-time.

#include <iostream>

constexpr double calculate_pi() {
    return 22/7;
}

constexpr double pi = calculate_pi();

int main()
{
   const double radius = 1.5;
   const double area = pi * radius * radius;
   std::cout << area;
}

