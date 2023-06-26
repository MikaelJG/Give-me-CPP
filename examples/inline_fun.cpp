
// asks compiler to insert the function’s body on the function call
inline 
void eat() {
  std::cout << "nom nom\n";
}

// or

// function defined and declared in a single line in a header file
void Cookie::eat() {std::cout << "nom nom\n";}

Without inline in header is slower.

// in night.cpp
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}
// in night.hpp
std::string goodnight1(std::string thing1);

With inline in header is faster. 0,004 milliseconds faster.

// nothing is night.cpp

//inline in header, night.hpp
inline
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}


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

