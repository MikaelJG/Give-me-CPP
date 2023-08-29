
int x = 42;
double y = 3.14;

auto lambda = [x, &y](int param1){ return x * param1 + y; };

    // x is captured by value, creating a copy
    // y is captured by reference, with access to original


int x = 42;
double y = 3.14;

auto lambda = [x, &y](int param1){ return x * param1 + y; };

    // x is captured by value, creating a copy
    // y is captured by reference, with access to original

