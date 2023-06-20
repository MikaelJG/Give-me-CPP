
class City { // In Header, city.hpp
  std::string name;
  int population;
 
public:
  City(std::string new_name, int new_pop);
  ~City(); // destructor
};
 
City::~City() { // in main, city.cpp
  // any final cleanup
}


class City { // In Header, city.hpp
  std::string name;
  int population;
 
public:
  City(std::string new_name, int new_pop);
  ~City(); // destructor
};
 
City::~City() { // in main, city.cpp
  // any final cleanup
}

