
// one must be true
    Each has different type parameters.
    Each has a different number of parameters.
    
// in num.cpp 
// defining
int fancy_number(int num1, int num2) {
  return num1 - num2 + (num1 * num2);
}

int fancy_number(int num1, int num2, int num3) {
  return num1 - num2 - num3 + (num1 * num2 * num3);
} // different number of params.

int fancy_number(double num1, double num2) {
  return num1 - num2 + (num1 * num2);
} // different type of params.
// in num.hpp
// declaring
int fancy_number(int num1, int num2);
int fancy_number(int num1, int num2, int num3);
int fancy_number(double num1, double num2);



// one must be true
    Each has different type parameters.
    Each has a different number of parameters.
    
// in num.cpp 
// defining
int fancy_number(int num1, int num2) {
  return num1 - num2 + (num1 * num2);
}

int fancy_number(int num1, int num2, int num3) {
  return num1 - num2 - num3 + (num1 * num2 * num3);
} // different number of params.

int fancy_number(double num1, double num2) {
  return num1 - num2 + (num1 * num2);
} // different type of params.
// in num.hpp
// declaring
int fancy_number(int num1, int num2);
int fancy_number(int num1, int num2, int num3);
int fancy_number(double num1, double num2);


