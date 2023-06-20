
// in Header, in song.hpp
class Song {
  std::string title;
  std::string artist;

public:
  Song(std::string new_title, std::string new_artist); // constructor
-d>zz
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


// in Header, in song.hpp
class Song {
  std::string title;
  std::string artist;

public:
  Song(std::string new_title, std::string new_artist); // constructor
-d>zz
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

