
int porcupine = 3;
std::cout << &porcupine << "\n"; // Memory address
                                 // 0x7ffd7caa5b54

Dynamic Memory Allocation

int main() {
    int size = 5;
    int* dynamicArray = new int[size];

    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i + 1;
    }

    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }

    delete[] dynamicArray;
    return 0;
}

