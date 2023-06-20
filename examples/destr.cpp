
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

class Song { // in header, .hpp
  std::string title;
  std::string artist;

public:
  Song(std::string new_title, std::string new_artist);
  ~Song();
  
  std::string get_title(); // getters
  std::string get_artist();
};

Song::Song(std::string new_title, std::string new_artist) // .cpp
  : title(new_title), artist(new_artist) {}

Song::~Song() { // aded destructor
  std::cout << "Goodbye " << title << "\n";
}

struct Double_Data {

    Double_Data(const std::size_t size)
      : data(new double[size] /// allocate
    {
    }

    ~Double_Data() { /// destructor
      delete [] data; // free
    }

    double *data;

};

