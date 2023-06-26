
int triple(int const i) { // we know parameters won't change
  return i * 3;
}

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

Const everything that's not constexpr

Is this a good const?

double *get_data() {
    double *data = new double[3];
    data[0] = 1.1; data[1] = 2.2; data[2] = 3.3;
    return data;
}

double *sum_data(double *data) {
    return data[0] + data[1] + data[2]; // uncaught leak
}

int main() {
    return sum_data(get_data());
}

// If only there was some way to automatically delete things when they are no longer needed...


int triple(int const i) { // we know parameters won't change
  return i * 3;
}

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

Const everything that's not constexpr

Is this a good const?

double *get_data() {
    double *data = new double[3];
    data[0] = 1.1; data[1] = 2.2; data[2] = 3.3;
    return data;
}

double *sum_data(double *data) {
    return data[0] + data[1] + data[2]; // uncaught leak
}

int main() {
    return sum_data(get_data());
}

// If only there was some way to automatically delete things when they are no longer needed...

