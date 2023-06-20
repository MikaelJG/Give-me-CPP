
std::string always_blue() { // string return
}
bool needs_it_support() { // bool return
  bool support;
  
  std::cout << "Enter 1 for yes, 0 for no.\n";
  // returning 1 == true, return 0 == false.
  std::cin >> support;
  return support;
}

Void, Also refered as subroutine.

void oscar_wilde_quote() {
  std::cout << "The highest";
}
int main() {
  oscar_wilde_quote();
}

#include <iostream>
#include <vector>

template <typename T>
struct ComplexType {
    T value;
    std::vector<T> elements;

    ComplexType(T val) : value(val) {}

    void print() {
        std::cout << "Value: " << value << std::endl;
        std::cout << "Elements:";
        for (const auto& elem : elements) {
            std::cout << " " << elem;
        }
        std::cout << std::endl;
    }
};

template <typename T>
ComplexType<T> createComplexType(T value, const std::vector<T>& elements) {
    ComplexType<T> complex(value);
    complex.elements = elements;
    return complex;
}

int main() {
    std::vector<int> elements = {1, 2, 3, 4, 5};
    ComplexType<int> result = createComplexType(10, elements);
    result.print();

    return 0;
}


