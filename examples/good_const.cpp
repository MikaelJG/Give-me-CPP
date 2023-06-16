
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

