
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

