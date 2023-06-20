
#include <span>

void printSpan(std::span<int> sp) {
    for (int element : sp) {}
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::span<int> span(arr, 5);

    printSpan(span); // takes span and prints elements
    return 0;
}

