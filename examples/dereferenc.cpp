
Declaration? * creates a pointer.
Not a declaration? * is a dereference operator.

int main() {
  int power = 9000;
  int* ptr = &power;
  std::cout << *ptr; // prints 9000
}

int main() {
    int x = 10;
    int* ptr = &x;

    std::cout << "Value of x: " << x << std::endl;            
    // Output: Value of x: 10

    std::cout << "Address of x: " << &x << std::endl;         
    // Output: Address of x: 0x7ffeebdbcbe4

    std::cout << "Value of ptr: " << ptr << std::endl;        
    // Output: Value of ptr: 0x7ffeebdbcbe4

    std::cout << "Dereferenced value of ptr: " << *ptr << std::endl;  
    // Output: Dereferenced value of ptr: 10

    *ptr = 20;  // Dereference ptr and assign a new value

    std::cout << "Modified value of x: " << x << std::endl;    // Output: Modified value of x: 20

    return 0;
}

