
// Pointers store a memory address. If possible, avoid pointers!

int* number; // Declaring
double* decimal;
char* character;

int gum = 8;
int* ptr = &gum; // int* [declare a pointer]
                 // ptr [pointer's name]
                 // &gum [store gum's memory address in ptr]

int* number; // Declaration standard
int *number;
int * number; // All Synthaxically valid

Certainly! Here are two complex examples showcasing the use of pointers in C++:

Example 1: Pointer to Pointer
```cpp
#include <iostream>

int main() {
    int value = 5;
    int* ptr = &value;
    int** ptrToPtr = &ptr;

    std::cout << "Value: " << value << std::endl;
    std::cout << "Value via pointer: " << *ptr << std::endl;
    std::cout << "Value via pointer to pointer: " << **ptrToPtr << std::endl;

    return 0;
}
```
In this example, we declare a variable `value` and initialize it with the value 5. We then create a pointer `ptr` that points to the address of `value`. Finally, we create a pointer to a pointer `ptrToPtr` that points to the address of `ptr`. We can access the value of `value` through the pointer `ptr` using the dereference operator `*`, and we can access it through the pointer to pointer `ptrToPtr` using double dereference `**`.

// Dynamic Memory Allocation

int main() {
    int size = 5;
    int* dynamicArray = new int[size];

    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i + 1;
    }

    std::cout << "Dynamic Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] dynamicArray;

    return 0;
}

We allocate dynamic memory for an integer array of size 5 using the `new` keyword.
We then populate the array with values from 1 to 5.
Finally, we print and release the allocated memory using `delete[]` to avoid memory leaks.


// Pointers store a memory address. If possible, avoid pointers!

int* number; // Declaring
double* decimal;
char* character;

int gum = 8;
int* ptr = &gum; // int* [declare a pointer]
                 // ptr [pointer's name]
                 // &gum [store gum's memory address in ptr]

int* number; // Declaration standard
int *number;
int * number; // All Synthaxically valid

Certainly! Here are two complex examples showcasing the use of pointers in C++:

Example 1: Pointer to Pointer
```cpp
#include <iostream>

int main() {
    int value = 5;
    int* ptr = &value;
    int** ptrToPtr = &ptr;

    std::cout << "Value: " << value << std::endl;
    std::cout << "Value via pointer: " << *ptr << std::endl;
    std::cout << "Value via pointer to pointer: " << **ptrToPtr << std::endl;

    return 0;
}
```
In this example, we declare a variable `value` and initialize it with the value 5. We then create a pointer `ptr` that points to the address of `value`. Finally, we create a pointer to a pointer `ptrToPtr` that points to the address of `ptr`. We can access the value of `value` through the pointer `ptr` using the dereference operator `*`, and we can access it through the pointer to pointer `ptrToPtr` using double dereference `**`.

// Dynamic Memory Allocation

int main() {
    int size = 5;
    int* dynamicArray = new int[size];

    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i + 1;
    }

    std::cout << "Dynamic Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] dynamicArray;

    return 0;
}

We allocate dynamic memory for an integer array of size 5 using the `new` keyword.
We then populate the array with values from 1 to 5.
Finally, we print and release the allocated memory using `delete[]` to avoid memory leaks.

