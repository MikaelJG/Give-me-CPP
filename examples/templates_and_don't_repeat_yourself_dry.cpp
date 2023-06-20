
// divide doubles
double divide(double numerator, double denominator) {
    return numerator / denominator;
}

//But you don't want all of your divisions to be promoted to double. 

// Divide floats
float divide(float numerator, float denominator) {
    return numerator / denominator;
}

// You want to handle some kind of int values. 

//divide ints
int divide(int numerator, int denominator) {
    return numerator / denominator;
}

// Templates were designed for just this scenario. 

