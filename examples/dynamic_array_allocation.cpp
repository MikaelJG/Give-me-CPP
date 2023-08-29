
int size = 5; // desired size of the array
int* dynamicArray = new int[size]; // allocate memory for the array

// Access and modify elements of the dynamic array
dynamicArray[0] = 10;
dynamicArray[1] = 20;
// ...

// Deallocate the memory when it's no longer needed
delete[] dynamicArray;

#include <array>

int main() {
    std::array<int, 3> ar{1,2,3};

    int* dyn_ar = new int[4];

    dyn_ar[0] = 10;
    dyn_ar[1] = 20;
    dyn_ar[2] = 30;
    dyn_ar[3] = 40;
    dyn_ar[4] = 50;
    dyn_ar[5] = 60;
    dyn_ar[6] = 70;

    for (int i = 0; i < 7; i++) {
        std::cout << dyn_ar[i] << " ";
    }
    std::cout << std::endl; // prints 10, 20, 30, 40.. 70.

    delete[] dyn_ar;

    return 0; // return success
}



int size = 5; // desired size of the array
int* dynamicArray = new int[size]; // allocate memory for the array

// Access and modify elements of the dynamic array
dynamicArray[0] = 10;
dynamicArray[1] = 20;
// ...

// Deallocate the memory when it's no longer needed
delete[] dynamicArray;

#include <array>

int main() {
    std::array<int, 3> ar{1,2,3};

    int* dyn_ar = new int[4];

    dyn_ar[0] = 10;
    dyn_ar[1] = 20;
    dyn_ar[2] = 30;
    dyn_ar[3] = 40;
    dyn_ar[4] = 50;
    dyn_ar[5] = 60;
    dyn_ar[6] = 70;

    for (int i = 0; i < 7; i++) {
        std::cout << dyn_ar[i] << " ";
    }
    std::cout << std::endl; // prints 10, 20, 30, 40.. 70.

    delete[] dyn_ar;

    return 0; // return success
}


