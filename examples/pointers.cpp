
Declaration? * creates a pointer.
Not a declaration? * is a dereference operator.

int main() {
  int power = 9000;
  int* ptr = &power;
  std::cout << *ptr; // prints 9000
}

int* number;         // Declaring
double* decimal;
char* character;

int gum = 8;
int* ptr = &gum;     // int* [declare a pointer]
                     // ptr [pointer's name]
                     // &gum [store gum's memory address in ptr]

int* number;         // Declaration standard
int *number;
int * number;        // All Synthaxically valid


