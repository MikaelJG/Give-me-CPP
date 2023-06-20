
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

