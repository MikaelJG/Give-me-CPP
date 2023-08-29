
int triple(const int &i) { // save computational cost
  return i * 3;            // don't make a copy of the argument
}

int square(const int &i) {
  return i * i;
}

int main() {
  int side = 5;
  std::cout << square(side) << "\n";
}


int triple(const int &i) { // save computational cost
  return i * 3;            // don't make a copy of the argument
}

int square(const int &i) {
  return i * i;
}

int main() {
  int side = 5;
  std::cout << square(side) << "\n";
}

