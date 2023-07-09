
  std::exit(0) (success)
  std::exit(1) (failure)

  int isPrime(int x) {
    if (x % 2 == 1) {
        return 0; // is considered as false
                  // Yet, is it not the same as the boolean false
                  // In a boolean context, 
                  // 0 is implicitly converted to false,
                  // However, not equivalent in all contexts.
    }
  }

Void, Also refered as subroutine.

void oscar_wilde_quote() {
  std::cout << "The highest";
}

#include <vector>

template <typename T>
struct ComplexType {
    T value;
    std::vector<T> elements;

    ComplexType(T val) : value(val) {} // constructor

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
    std::vector<int> elements{1, 2, 3, 4, 5};
    ComplexType<int> result = createComplexType(10, elements);
    result.print();

    return 0;
}


