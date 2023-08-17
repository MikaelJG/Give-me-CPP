
inline 
void eat() {
  std::cout << "nom nom\n";
}

-- single line in header file is slower --
void Cookie::eat() {std::cout << "nom nom\n";}

-- goodnight.cpp --
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}
-- goodnight.h --
std::string goodnight1(std::string thing1);

-- night.hpp -- 
inline
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}

