
// in night.cpp
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}
// in night.hpp
std::string goodnight1(std::string thing1);


// nothing is night.cpp

//inline in header, night.hpp
inline
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}

