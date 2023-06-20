
If two functions have different types but the same body
Use templates

// in Header
template <typename meaningful_Type>
meaningful_Type get_smallest(meaningful_Type num1, meaningful_Type num2) {
  return num2 < num1? num2 : num1;
}

// in main.cpp
#include <iostream>
#include "numbers.hpp"

int main() {

  std::cout << get_smallest(100, 60) << "\n";
  std::cout << get_smallest(2543.2, 3254.3) << "\n";

}

// I need more on this.


If two functions have different types but the same body
Use templates

// in Header
template <typename meaningful_Type>
meaningful_Type get_smallest(meaningful_Type num1, meaningful_Type num2) {
  return num2 < num1? num2 : num1;
}

// in main.cpp
#include <iostream>
#include "numbers.hpp"

int main() {

  std::cout << get_smallest(100, 60) << "\n";
  std::cout << get_smallest(2543.2, 3254.3) << "\n";

}

// I need more on this.

