
int &sonny = songqiao; // Sonny, a reference to songqiao;

\\ Changes to the reference happens to the original.
\\ Aliases cannot be changed to alias something else.

  int soda = 99;
  int &pop = soda;
  pop++; // soda and pop equal at 100

Using a reference (&) instead of making a copy of the elements is more efficient,
especially when dealing with large objects or containers. 

By using a reference, the loop avoids creating a new copy of each element
, reducing unnecessary memory usage and improving performance.

#include <iostream>

struct ComplexStruct {
    int value1;
    int value2;
};

void modifyStruct(ComplexStruct& ref) {
    ref.value1 = 100;
    ref.value2 = 200;
}

int main() {
    int x = 10;
    int& ref1 = x;  // Reference variable ref1 refers to x

    std::cout << "x: " << x << std::endl;        // Output: x: 10
    std::cout << "ref1: " << ref1 << std::endl;  // Output: ref1: 10

    ref1 = 20;  // Modifying ref1 will also modify x

    std::cout << "x: " << x << std::endl;        // Output: x: 20
    std::cout << "ref1: " << ref1 << std::endl;  // Output: ref1: 20

    ComplexStruct obj;
    obj.value1 = 50;
    obj.value2 = 60;
    ComplexStruct& ref2 = obj;  // Reference variable ref2 refers to obj

    std::cout << "obj.value1: " << obj.value1 << std::endl;      // Output: obj.value1: 50
    std::cout << "obj.value2: " << obj.value2 << std::endl;      // Output: obj.value2: 60
    std::cout << "ref2.value1: " << ref2.value1 << std::endl;    // Output: ref2.value1: 50
    std::cout << "ref2.value2: " << ref2.value2 << std::endl;    // Output: ref2.value2: 60

    modifyStruct(ref2);  // Modifying ref2 will also modify obj

    std::cout << "obj.value1: " << obj.value1 << std::endl;      // Output: obj.value1: 100
    std::cout << "obj.value2: " << obj.value2 << std::endl;      // Output: obj.value2: 200
    std::cout << "ref2.value1: " << ref2.value1 << std::endl;    // Output: ref2.value1: 100
    std::cout << "ref2.value2: " << ref2.value2 << std::endl;    // Output: ref2.value2: 200

    return 0;
}


