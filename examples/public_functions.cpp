
class City {
  int population; 
 
public:         // accessible outside of the class
  void add_resident() { 
    population++;
  }

private:        // private to this class
  bool is_capital;
};

-- song.h --
class Song {
  std::string title;
  std::string artist;

public:
  void add_title(std::string new_title);
  std::string get_title();
  
  void add_artist(std::string new_artist);
  std::string get_artist();
};

-- song.cpp --
#include "song.hpp"

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

-- city.h -- 
#include "city.hpp"
 
class City {
  std::string name;
  int population;
 
public:
  City(std::string new_name, int new_pop);
 
};

-- city.cpp --
City::City(std::string new_name, int new_pop)
  : name(new_name), population(new_pop) {} 

-- main.cpp --
City ankara("Ankara", 5445000);

-- song.h -- 
class Song {
  std::string title;
  std::string artist;

public:
  Song(std::string new_title, std::string new_artist);

  void add_title(std::string new_title);
  std::string get_title();

  void add_artist(std::string new_artist);
  std::string get_artist();
};

-- song.cpp --
#include "song.hpp"

Song::Song(std::string new_title, std::string new_artist)
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

-- song.h --

class Song {
  std::string title;
  std::string artist;

public:
  Song(std::string new_title, std::string new_artist);

  std::string get_title();
  std::string get_artist();
};

-- song.cpp --
#include "song.hpp"

Song::Song(std::string new_title, std::string new_artist)
  : title(new_title), artist(new_artist) {}

std::string Song::get_title() {
  return title;
}

std::string Song::get_artist() {
  return artist;
}

-- main.cpp --
#include "song.hpp"

int main() { 
  Song back_to_black("Back to Black", "Amy Winehouse");

  std::cout << back_to_black.get_title() << "\n";
  std::cout << back_to_black.get_artist() << "\n";
}

