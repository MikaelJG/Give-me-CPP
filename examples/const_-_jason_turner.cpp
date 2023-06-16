
const double pi = 3.141593; // tells the compiler the value can't change

int main()
{
    const double radius = 1.5;
    const double area = pi * radius * radius;
    std::cout << area;

    // east const or west const, the same
    const int i = 5;
    int const j = 6;
}

