
Yet, we can't modify the value of the arguments.
The variable passed are out of scope.

#include <iostream>

struct ComplexStruct {
    int value1;
    int value2;
};

void modifyValue(int val) {
    val = 100;
}

void modifyStruct(ComplexStruct obj) {
    obj.value1 = 200;
    obj.value2 = 300;
}

int main() {
    int x = 10;

    std::cout << "Before modif: x = " << x << std::endl;  
    // Output: Before modif: x = 10

    modifyValue(x);  // Pass x by value to the modifyValue function

    std::cout << "After modif: x = " << x << std::endl;   
    // Output: After modif: x = 10

    ComplexStruct obj;
    obj.value1 = 50;
    obj.value2 = 60;

    std::cout << "Before modif: obj.value1 = " << obj.value1 << std::endl;  
    // Output: Before modif: obj.value1 = 50
    std::cout << "Before modif: obj.value2 = " << obj.value2 << std::endl;  
    // Output: Before modif: obj.value2 = 60

    modifyStruct(obj);  // Pass obj by value to the modifyStruct function

    std::cout << "After modif: obj.value1 = " << obj.value1 << std::endl;   
    // Output: After modif: obj.value1 = 50
    std::cout << "After modif: obj.value2 = " << obj.value2 << std::endl;   
    // Output: After modif: obj.value2 = 60

    return 0;
}


