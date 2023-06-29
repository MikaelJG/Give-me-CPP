
inline 
void eat() {
  std::cout << "nom nom\n";
}

// or

// function defined and declared in a single line in a header file
void Cookie::eat() {std::cout << "nom nom\n";}


// source
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}
// header
std::string goodnight1(std::string thing1);

With inline in header is faster. 0,004 milliseconds faster.

//inline in header, night.hpp
inline
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}

