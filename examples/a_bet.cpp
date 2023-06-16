
struct Double_Data {
    Double_Data(const std::size_t size) : data(new double[size] {} // allocate
    ~Double_Data() { delete [] data; }
    double *data;
   };

Double_Data get_data() {
    Double_Data data(3);
    data.data[0] = 1.1; data.data[1] = 2.2; data.data[2] = 3.3;
    return data;
   };

double sum_data(const Double_Data &d) {
    return d.data[0] + d.data[1] + d.data[2];
}

int main() {
    return sum_data(get_data()); // no leak, but we'll come back to it
}

