
# include <iostream>

double square(double x) // a function named square, taking one argument: a double precision floating-point number
{
    return x*x;
}

void print_square(double x) // a function named print_square, taking one argument.
// void is a return type. It indicates that a function does not return a value.
{
    std::cout << "the square of" << x << " is " << square(x) << " \n"; // standard output stream
    // the function square() is used in the interpolation
}

int main()
{
    print_square(1.234); // "the square of 1.234 is 1.52276"
    print_square(5.555); // "the square of 5.555 is 30.858"
}

