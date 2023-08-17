
City montreal;
montreal.population = 20000;

montreal.get_population();

class Song { // header file, song.hpp

  std::string title;

public:
  void add_title(std::string new_title);
  std::string get_title();
};

void Song::add_title(std::string new_title) {
  title = new_title; // main file, song.cpp
}

std::string Song::get_title() {
  return title;
}
int main() {
  Song electric_relaxation;
  electric_relaxation.add_title("Electric Relaxation");
  std::cout << electric_relaxation.get_title();
}

