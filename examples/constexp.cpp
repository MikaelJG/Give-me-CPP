
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

// This function can be executed at compile-time
constexpr double calculate_pi() {
    return 22/7;
}

// This value will be available at compile-time 
constexpr double pi = calculate_pi();

Standard c++11, relaxed in c++14, relaxed a ton c++20

// But what is the type of pi?? (double, float, long double?)
I don't care?
It depends?

// If only there was a way to mention "I don't care or It depends" for what a type is ......  
`constexpr` is used for compile-time evaluation.
It ensures that an expression or function can be computed at compile time.
It reduces runtime overhead.
The program avoids the need to perform those computations at runtime. 

The computations are already done during the compilation process, 
The program doesn't incur the additional time and resources required
to perform them during runtime execution.


\subsection{Overcomplicated Constexpr}



// static const data known at compile time. 
static const std::vector<int> angles{-90,-45,0,45,90};

