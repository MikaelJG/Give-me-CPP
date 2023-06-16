
#include "city.hpp"
 
class City {
  std::string name; // In header, city.hpp
  int population;
 
public:
  City(std::string new_name, int new_pop);
 
};
 
City::City(std::string new_name, int new_pop) // city.cpp
  : name(new_name), population(new_pop) {} // member initialized to passed values.

City ankara("Ankara", 5445000); // works, in main()

