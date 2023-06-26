
int triple(int const &i) { // save computational cost
  return i * 3; // don't make a copy of the argument
}

int square(int const &i) {
  return i * i;
}

int main() {
  int side = 5;
  std::cout << square(side) << "\n";
}


int triple(int const &i) { // save computational cost
  return i * 3; // don't make a copy of the argument
}

int square(int const &i) {
  return i * i;
}

int main() {
  int side = 5;
  std::cout << square(side) << "\n";
}

