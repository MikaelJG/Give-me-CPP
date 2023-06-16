
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

