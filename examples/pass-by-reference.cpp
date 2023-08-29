
void swap_num(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}
 
int main() {
  int a = 100;
  int b = 200;
 
  swap_num(a, b);
}

int triple(int &i) {
  i = i * 3;
  return i;
}

int main() {
  int num = 1;
  std::cout << triple(num) << "\n";
}

template<typename T>
void modifyVector(std::vector<T>& vec) {
    for (auto& element : vec) {
        element *= 2;
    }
}

template<typename T>
void printVector(const std::vector<T>& vec) {
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    printVector(numbers);  // Output: Original vector: 1 2 3 4 5
    modifyVector(numbers);

    printVector(numbers);  // Output: Modified vector: 2 4 6 8 10
    return 0;
}


//Calling swap_num(), variables a and b's value will be modified
//because they are passed by reference

void swap_num(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}
 
int main() {
  int a = 100;
  int b = 200;
 
  swap_num(a, b);
 
  std::cout << "A is " << a << "\n";
  std::cout << "B is " << b << "\n";
}

WHEN? To MODIFY the arguments’ values.

int triple(int &i) {
  i = i * 3;
  
  return i;
}

int main() {
  int num = 1;
  std::cout << triple(num) << "\n";
}

template<typename T>
void modifyVector(std::vector<T>& vec) {
    for (auto& element : vec) {
        element *= 2;
    }
}

template<typename T>
void printVector(const std::vector<T>& vec) {
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Original vector: ";
    printVector(numbers);  // Output: Original vector: 1 2 3 4 5

    modifyVector(numbers);

    std::cout << "Modified vector: ";
    printVector(numbers);  // Output: Modified vector: 2 4 6 8 10

    return 0;
}


void swap_num(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}
 
int main() {
  int a = 100;
  int b = 200;
 
  swap_num(a, b);
}

int triple(int &i) {
  i = i * 3;
  return i;
}

int main() {
  int num = 1;
  std::cout << triple(num) << "\n";
}

template<typename T>
void modifyVector(std::vector<T>& vec) {
    for (auto& element : vec) {
        element *= 2;
    }
}

template<typename T>
void printVector(const std::vector<T>& vec) {
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    printVector(numbers);  // Output: Original vector: 1 2 3 4 5
    modifyVector(numbers);

    printVector(numbers);  // Output: Modified vector: 2 4 6 8 10
    return 0;
}


//Calling swap_num(), variables a and b's value will be modified
//because they are passed by reference

void swap_num(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}
 
int main() {
  int a = 100;
  int b = 200;
 
  swap_num(a, b);
 
  std::cout << "A is " << a << "\n";
  std::cout << "B is " << b << "\n";
}

WHEN? To MODIFY the arguments’ values.

int triple(int &i) {
  i = i * 3;
  
  return i;
}

int main() {
  int num = 1;
  std::cout << triple(num) << "\n";
}

template<typename T>
void modifyVector(std::vector<T>& vec) {
    for (auto& element : vec) {
        element *= 2;
    }
}

template<typename T>
void printVector(const std::vector<T>& vec) {
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Original vector: ";
    printVector(numbers);  // Output: Original vector: 1 2 3 4 5

    modifyVector(numbers);

    std::cout << "Modified vector: ";
    printVector(numbers);  // Output: Modified vector: 2 4 6 8 10

    return 0;
}

