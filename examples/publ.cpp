
class City {
  int population; 
 
public: // accessible outside of the class
  void add_resident() { 
    population++;
  }

private: // private to this class
  bool is_capital;
};

#include <string>

class Song { // header song.hpp
  std::string title;
  std::string artist;

public:
  void add_title(std::string new_title);
  std::string get_title();
  
  void add_artist(std::string new_artist);
  std::string get_artist();
};

#include "song.hpp"

void Song::add_title(std::string new_title) { // song.cpp
  title = new_title; // setters
}

std::string Song::get_title() { // getter
  return title;
}

void Song::add_artist(std::string new_artist) { // setters
  artist = new_artist;
}

std::string Song::get_artist() { // getters
  return artist;
}

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


// in Header, in song.hpp
class Song {
  std::string title;
  std::string artist;

public:
  Song(std::string new_title, std::string new_artist); // constructor

  void add_title(std::string new_title);
  std::string get_title();

  void add_artist(std::string new_artist);
  std::string get_artist();
};
                ***
#include "song.hpp"

Song::Song(std::string new_title, std::string new_artist) in main, song.cpp
  : title(new_title), artist(new_artist) {}

void Song::add_title(std::string new_title) {
  title = new_title;
}
std::string Song::get_title() {
  return title;
}

void Song::add_artist(std::string new_artist) {
  artist = new_artist;
}

std::string Song::get_artist() {
  return artist;
}

#include <string> // in header file, song.hpp

class Song {
  std::string title;
  std::string artist;

public:
  Song(std::string new_title, std::string new_artist);

  std::string get_title();
  std::string get_artist();
};
                    ***
#include "song.hpp"

Song::Song(std::string new_title, std::string new_artist) // in main song.cpp
  : title(new_title), artist(new_artist) {}

std::string Song::get_title() {
  return title;
}

std::string Song::get_artist() {
  return artist;
}

#include <iostream> // in main.cpp
#include "song.hpp"

int main() { 
  Song back_to_black("Back to Black", "Amy Winehouse");

  std::cout << back_to_black.get_title() << "\n";
  std::cout << back_to_black.get_artist() << "\n";
}

