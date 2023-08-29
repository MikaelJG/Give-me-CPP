
    int: integers                   // 4 bytes
    double: floating-point numbers  // double 8 bytes
    char: individual characters     // 1 byte
    float:                          // 4 bytes
    long:                           // 4 or 8 bytes (platform dependent)
    long long:                      // 8 bytes
    bool: true/false                // 1 byte

    // use sizeof for size

std::cout << "Size of int: " << sizeof(numInt); 


constexpr double calculate_pi() {
    return 22/7;
}

constexpr auto pi = calculate_pi();

int main()
{
    const auto radius = 1.5;
    const auto area = pi * radius * radius;
    std::cout << area;

}

constexpr auto calculate_pi() {
    return 22/7;
}

constexpr auto pi = calculate_pi();

// east/ west const
const auto result = std::count( /*stuff */);
auto const result = std::count( /*stuff*/ );


std::cout << (coin == 0 ? "Heads" : "Tails") << "\n";


    ==              equal to
    !=              not equal to
    >               greater than
    <               less than
    >=              greater than or equal to
    <=              less than or equal to


    &&              and 
    ||              or
    !               not

    if (hunger && anger){}

    ( !true )       not false
    ( !(10 < 11) )  not condition 


reversed_text += text

std::string chapOnePath = parentDirectory + "/chap_1";


run() {
    {
        Is this in scope? //This variable is out of scope.?
    {
    
}


int age = 28;
std::cout << age << "years old.\n";

template <typename T>
struct MathOperation {
    T value;

    MathOperation(T val) : value(val) {}

    template <typename U>
    MathOperation<U> add(U val) {
        return MathOperation<U>(value + val);
    }

    template <typename U>
    MathOperation<U> multiply(U val) {
        return MathOperation<U>(value * val);
    }

    void print() {
        std::cout << "Result: " << value << std::endl;
    }
};

int main() {
    MathOperation<int> operation(5);
    operation.add(3).multiply(2).print();

    return 0; // return success
}


    std::cin            : Standard input stream for reading user input.
    std::cout           : Standard output stream for writing output.
    std::cerr           : Standard error stream for writing error messages (unbuffered).
    std::clog           : Standard error stream for writing log messages (buffered).
    std::ifstream       : Input file stream for reading from files.
    std::ofstream       : Output file stream for writing to files.
    std::fstream        : File stream for reading from and writing to files.
    std::istringstream  : Input string stream for reading from strings.
    std::ostringstream  : Output string stream for writing to strings.
    std::stringstream   : String stream for reading from and writing to strings.
    std::wcin           : Wide character version of std::cin for reading wide characters.
    std::wcout          : Wide character version of std::cout for writing wide characters.
    std::wcerr          : Wide character version of std::cerr for writing wide error messages.
    std::wclog          : Wide character version of std::clog for writing wide log messages.


#include <map>
#include <sstream>

int main() {
    std::string text = "lorem";

    for (char& c : text) {
        c = std::tolower(c);
    }

    std::map<std::string, int> wordfreq;
    std::istringstream iss(text);
    std::string word;

    while (iss >> word) { // count frequency
        wordfreq[word]++;
    }

    for (const auto& pair : wordfreq) { // display
        std::cout << pair.first << ": " << pair.second;
    }

    return 0; // return success
}


enum class Day {
    Monday,
    Tuesday,
    Wednesday,
};

int main() {
    Day today = Day::Tuesday;

    if (today == Day::Saturday || today == Day::Wednesday) {
    } else {}

    return 0; // return success
}

enum Color {
    Red,
    Green,
    Blue
};

void printColor(Color color) {
    switch (color) {
        case Red:
            break;
        case Green: // ...
            break;
        case Blue: // ...
            break;
    }
}

int main() {
    Color favoriteColor = Color::Green;
    printColor(favoriteColor);

    return 0; // return success
}


enum class Fruit {
    Apple,
    Banana,
    Orange
};

const std::array<std::string, 3> fruitNames = {
    "Apple",
    "Banana",
    "Orange"
}

const std::string fruitNames[] = { // c-style array
                                   // size by initializer
    "Apple",
    "Banana",
    "Orange"
};

int main() {
    Fruit selectedFruit = Fruit::Banana;
    int fruitIndex = static_cast<int>(selectedFruit);

    std::cout << "Selected fruit: " << fruitNames[fruitIndex] << std::endl;

    return 0; // return success
}


enum class Month {
    January,
    February,
    March // ...
};

const std::vector<std::string> monthNames = {
    "January",
    "February",
    "March" // ... 
};

int main() {
    Month currentMonth = Month::May;
    int monthIndex = static_cast<int>(currentMonth);

    std::cout << "Current month: " << monthNames[monthIndex] << std::endl;

    return 0; // return success
}


#include <array> // c++ 11
    std::array<char, 128> second = {'H', 'e', 'l'} // from library
                            // fixed size of 128
                            // has .begin(), .end(), .at(), .size() 

    sint arr[] = {1, 2, 3}; // c-style array 
                            // size determined by initializer's list
                            // fixed at compile-time 

std::array<Type, Size> data

#include <numeric>
#include <array>

template<typename Value_Type>
std::array<Value_Type, 3> get_data(const Value_Type &v1, const Value_type &v2,
                                   const Value_type &v3)
{
    std::array<Value_Type 3> data;
    data[0] = v1;
    data[1] = v2;
    data[2] = v3;
    return data;
}

// no dynamic allocation, 
// win-win scenario with knowing the size of the data struture at compile time.

template<typename> VT> // takes 3 parameters
std::array<VT, 3> get_data(const VT &v1, const VT &v2, const VT &v3)
{
    return {v1, v2, v3};
}

template<typename> VT> // takes 4 parameters
std::array<VT, 4> get_data(const VT &v1, const VT &v2, const VT &v3, const VT &v4))
{
    return {v1, v2, v3, v4};
}


int size = 5; // desired size of the array
int* dynamicArray = new int[size]; // allocate memory for the array

// Access and modify elements of the dynamic array
dynamicArray[0] = 10;
dynamicArray[1] = 20;
// ...

// Deallocate the memory when it's no longer needed
delete[] dynamicArray;

#include <array>

int main() {
    std::array<int, 3> ar{1,2,3};

    int* dyn_ar = new int[4];

    dyn_ar[0] = 10;
    dyn_ar[1] = 20;
    dyn_ar[2] = 30;
    dyn_ar[3] = 40;
    dyn_ar[4] = 50;
    dyn_ar[5] = 60;
    dyn_ar[6] = 70;

    for (int i = 0; i < 7; i++) {
        std::cout << dyn_ar[i] << " ";
    }
    std::cout << std::endl; // prints 10, 20, 30, 40.. 70.

    delete[] dyn_ar;

    return 0; // return success
}



  std::vector<double> subway_adult; // value is 0.0 is default
  std::vector<double> location(2); // initialize two elements! 
}

std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
std::vector vec{1,2,3}; // now possible! 

int main(int argc, char* argv[]) {
    std::vector<std::string> arguments(argv + 1, argv + argc);
}

template<typename Value_Type>
std::vector<Value_Type> get_data(const Value_Type &v1, const Value_Type &v2,
                                 const Value_Type &v3)

{
    std::vector<Value_Type> data;
    data.push_back(v1);
    data.push_back(v2);
    data.push_back(v3);
    return data;
}


template<typename Value_Type>
struct Data {
    Data(const std::size_t size)
      : data(new Value_Type[size]) // constructor
    {
    }

    ~Data() { delete [] data; }

    Value_Type *data;
};


if (coin == 0) {
} else {}
}


int main() {
  int number = 9;
  switch(number) {
    case 1 : // ...
      std::cout << "case one";
      break;
    case 2 :
      break;
    default : // ...
      break;
  }
}


while (guess != 8) {
  std::cout << "Wrong guess, try again: ";
  std::cin >> guess;
}

for (int i = 0; i < 20; i++) {}  // incrementing
for (int i = 20; i > 0; i--) {}  // decrementing


#include <format>
#include <string_view>

void print_map(const auto &map,
               const std::string_view &key_desc = "key",
               const std::string_view &value_desc = "value")
{
    const auto print_key_value = [&](const auto &data) { 
        const auto &[key, value] = data;
        std::puts(std::format("{}: '{}' {}: '{}'",
                         key_desc, key, value_desc, value).c_str());
    };

    for_each(map, print_key_value);
}

#include <ranges>

int main()
{
    std::vector<int> ints{1, 2, 3, 4, 5};
    auto even = [](int i){ return 0 == i % 2; };
    auto square = [](int i){ return i * i; };
                                              
    for (int i : ints | std::view::filter(even) | std::view::transform(square)) {
        std::cout << i << ' ';
    }
}


auto even = [](int i){ return 0 == i % 2; };
auto square = [](int i){ return i * i; };

for (int i : ints | std::view::filter(even) | std::view::transform(square)) {
    std::cout << i << ' ';
}

`ints`: The input range of integers.
`std::view::filter(even)`: Filters the `ints` range, keeping only the even numbers.
`std::view::transform(square)`: Transforms the filtered range by squaring each element.
`int i : ...`: Iterates over the resulting transformed range and assigns each element to `i`.
`std::cout << i << ' ';`: Prints each element `i` separated by a space.



for (const auto &element : container) {}

std::string str = "Hello";
for (char character : str) {
    std::cout << character << '\n';
}

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (const auto &data : map)
    {
        std::cout << key_desc << ": '" << data_itr->first << "' "
                  << value_desc << ": '" << data_itr->second << "'\n";
    }
}

for (const auto &value : container) {} // for each element in the container

Use clang-tidy's modernize-loop-convert check.

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (const auto &data : map)
    {
        std::cout << key_desc << ": '" << data.first << "' "
                  << value_desc << ": '" << data.second << "'\n";
    }
}


void eat() {
  std::cout << "nom nom\n";
}

bool even(int num) {
  return ( num % 2 == 0 ? true : false );
  // this should be tested
}


inline 
void eat() {
  std::cout << "nom nom\n";
}

-- single line in header file is slower --
void Cookie::eat() {std::cout << "nom nom\n";}

-- goodnight.cpp --
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}
-- goodnight.h --
std::string goodnight1(std::string thing1);

-- night.hpp -- 
inline
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}


class Musician {
private:
    int instruments;

public:
    int getMyVariable() const {
        return myVariable;
    }

    void setMyVariable(int newValue) {
        myVariable = newValue;
    }
};

int main() {
    MyClass obj;
    obj.setMyVariable(42);

    int value = obj.getMyVariable();
    return 0;
}


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


// one must be true
    Each has different type parameters.
    Each has a different number of parameters.
    
-- num.cpp --
int fancy_number(int num1, int num2) {
  return num1 - num2 + (num1 * num2);
}

int fancy_number(int num1, int num2, int num3) {
  return num1 - num2 - num3 + (num1 * num2 * num3);
} // different number of params.

int fancy_number(double num1, double num2) {
  return num1 - num2 + (num1 * num2);
}               // different type of params.

-- num.hpp --
int fancy_number(int num1, int num2);
int fancy_number(int num1, int num2, int num3);
int fancy_number(double num1, double num2);


void get_emergency_number(std::string emergency_number) {}

struct ComplexType {
    int value;
    std::vector<int> data;
};

void processComplexType(const ComplexType& complexParam) {
    std::cout << "Value: " << complexParam.value << std::endl;
    std::cout << "Data:";
    for (int num : complexParam.data) {
        std::cout << " " << num;
    }
    std::cout << std::endl;
}

int main() {
    ComplexType complexObj;
    complexObj.value = 42;
    complexObj.data = {1, 2, 3, 4, 5};

    processComplexType(complexObj);

    return 0;
}

Many Parameters

double get_tip(double price, double tip, bool total_included) {
    get_tip(0.25, true, 45.50); // will not work. Order matters. 
}

void name_x_times(std::string name, int x){
  while (x > 0) {
    std::cout << name << "\n";
    x--;
  }
}


void useless_function(int val) {
    val = val * 2;
}


void swap_num(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}
 
int main() {
  int a = 100;
  int b = 200;
 
  swap_num(a, b);
}

int triple(int &i) {
  i = i * 3;
  return i;
}

int main() {
  int num = 1;
  std::cout << triple(num) << "\n";
}

template<typename T>
void modifyVector(std::vector<T>& vec) {
    for (auto& element : vec) {
        element *= 2;
    }
}

template<typename T>
void printVector(const std::vector<T>& vec) {
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    printVector(numbers);  // Output: Original vector: 1 2 3 4 5
    modifyVector(numbers);

    printVector(numbers);  // Output: Modified vector: 2 4 6 8 10
    return 0;
}


struct Chapters {
    bool IsToPrint = true;
};

struct Chapters {
    bool IsToPrint;

    Chapters() : IsToPrint(true) {} // with default constructor
};

int main() {
    Chapters c1;
    Chapters c2 = {false}; //  list initialization
                           // works when only one bool in struct

    // c1.IsToPrint will be true
    // c2.IsToPrint will be false

    return 0;
}


void intro(std::string name, std::string lang = "C++");


int &sonny = songqiao; // Sonny, a reference to songqiao;

\\ Changes to the reference happens to the original.
\\ Aliases cannot be changed to alias something else.

  int soda = 99;
  int &pop = soda;
  pop++; // soda and pop equal at 100

Using a reference (&) instead of making a copy of the elements is more efficient,
especially when dealing with large objects or containers. 

By using a reference, the loop avoids creating a new copy of each element
, reducing unnecessary memory usage and improving performance.

struct ComplexStruct {
    int value1;
    int value2;
};

void modifyStruct(ComplexStruct& ref) {
    ref.value1 = 100;
    ref.value2 = 200;
}

int main() {
    int x = 10;
    int& ref1 = x;              // Reference variable ref1 refers to x
    ref1 = 20;                  // Modifying ref1 will also modify x

    ComplexStruct obj;
    obj.value1 = 50;
    obj.value2 = 60;
    ComplexStruct& ref2 = obj;  // Reference variable ref2 refers to obj

    modifyStruct(ref2);         // Modifying ref2 will also modify obj
    return 0;
}


Declaration? * creates a pointer.
Not a declaration? * is a dereference operator.

int main() {
  int power = 9000;
  int* ptr = &power;
  std::cout << *ptr; // prints 9000
}


//Calling swap_num(), variables a and b's value will be modified
//because they are passed by reference

void swap_num(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}
 
int main() {
  int a = 100;
  int b = 200;
 
  swap_num(a, b);
 
  std::cout << "A is " << a << "\n";
  std::cout << "B is " << b << "\n";
}

WHEN? To MODIFY the arguments’ values.

int triple(int &i) {
  i = i * 3;
  
  return i;
}

int main() {
  int num = 1;
  std::cout << triple(num) << "\n";
}

template<typename T>
void modifyVector(std::vector<T>& vec) {
    for (auto& element : vec) {
        element *= 2;
    }
}

template<typename T>
void printVector(const std::vector<T>& vec) {
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Original vector: ";
    printVector(numbers);  // Output: Original vector: 1 2 3 4 5

    modifyVector(numbers);

    std::cout << "Modified vector: ";
    printVector(numbers);  // Output: Modified vector: 2 4 6 8 10

    return 0;
}


int triple(const int &i) { // save computational cost
  return i * 3;            // don't make a copy of the argument
}

int square(const int &i) {
  return i * i;
}

int main() {
  int side = 5;
  std::cout << square(side) << "\n";
}


int soda = 99; 
int &pop = soda;
pop++;


int porcupine = 3; 
std::cout << &porcupine << "\n"; 

// 0x7ffd7caa5b54


Declaration? * creates a pointer.
Not a declaration? * is a dereference operator.

int main() {
  int power = 9000;
  int* ptr = &power;
  std::cout << *ptr; // prints 9000
}

int* number;         // Declaring
double* decimal;
char* character;

int gum = 8;
int* ptr = &gum;     // int* [declare a pointer]
                     // ptr [pointer's name]
                     // &gum [store gum's memory address in ptr]

int* number;         // Declaration standard
int *number;
int * number;        // All Synthaxically valid



int* ptr; // declared, not yet initialized


int* ptr = nullptr;


class Factory {
public:
    std::unique_ptr<Product> createProduct(const std::string& productType) {
        if (productType == "A") {
            return std::make_unique<ConcreteProductA>();

            // make unique
            // create an instance of std::unique_ptr


        } else if (productType == "B") {
            return std::make_unique<ConcreteProductB>();
        } else {
            return nullptr;
        }
    }
};

#include <memory>

int main() {
    std::unique_ptr<int> num_ptr = std::make_unique<int>(42);
    // num_ptr owns the dynamically allocated integer

    // ...
    
    return 0;
}



int main() {
    int value = 5;
    int* ptr = &value;
    int** ptrToPtr = &ptr;

    return 0;
}


A C++ class is a user-defined type.

class City {
}; // needs semicolon


Class components are called class members
Attributes and methods are class members

class City {
  int population; // attribute
 
public:
  void add_resident() { // method
    population++;
  }
};


#include <span>

void printSpan(std::span<int> sp) {
    for (int element : sp) {}
}

int main() {
    std::array<int,5> arr{1, 2, 3, 4, 5};
    std::span<int> span(arr, 5);

    printSpan(span); // takes span and prints elements
    return 0;
}


template <typename meaningful_Type>
meaningful_Type get_smallest(meaningful_Type num1, meaningful_Type num2) {
  return num2 < num1? num2 : num1;
}

int main() {
  std::cout << get_smallest(100, 60) << "\n";
  std::cout << get_smallest(2543.2, 3254.3) << "\n";
}

template types are generated by the compiler at compile time
Do not need any kind of type-erasure (like Java generics do)

Highly efficient runtime code possible, 
as good as (or better than) hand writing the various options
template system is Turing complete (not necessarily a good thing)

    template<typename SomeType>
    struct S { // struct can do anything it wants with this type
    };

// declare a class template that can hold anything we want
template<typename Value_Type>
struct Data {
    Data(const std::size_t size)
      : data(new Value_Type[size])
    {
    }

    ~Data() { delete [] data; }

    Value_Type *data;
};

// declare a function template that take 3 params of the same type
// and passes that type on to the 'Data' template

template<typename Value_Type>
Data<Value_Type> get_data(const Value_Type &v1, const Value_Type &v2,
                          const Value_type &v3)
{
    {Data<Value_Type> d(3);
    d.data[0] = v1; d.data[1] = v2; d.data[2] = v3;
    return d;
}


template<typename T>
T divide(T numerator, T denominator) {
    return numerator / denominator;
}


#include <array>

// require at least one parameter and it sets the type
template<typename VT, typename ... Params>
std::array<VT, sizeof...(Params)+1> get_data(const VT &v1, const Params& ...params)
{
    return {v1, params...};
}


template<typename VT, Typename ... P> // variadic template
std::array<VT, sizeof...(P)> get_data(const P & ... params) // param expansion
{
    return {params...}; // pack expansion
}

template<typename> VT>
std::array<VT, 3> get_data(const VT &v1, const VT &v2, const VT &v3) // 3 params
{
    std::array<VT, 3> data;
    data[0] = v1; data[1] = v2; data[2] = v3;
    return data;
}

template<typename> VT>
std::array<VT, 2> get_data(const VT &v1, const VT &v2) // 2 params
{
    std::array<VT, 2> data;
    data[0] = v1; data[1] = v2;
    return data;
}

template<typename> VT>
std::array<VT, 1> get_data(const VT &v1) // 1 params
{
    std::array<VT, 1> data;
    data[0] = v1;
    return data;
}

// This bothers.
template<typename Value_Type>
struct Data {
    Data(const std::size_t size)
      : data(new Value_Type[size])
    {
    }

    ~Data() { delete [] data; }

    Value_Type *data;
};


template<typename VT, typename ... Params>
auto get_data(const VT &v1, const Params & ... params)
{
    return std::array{v1, params...}; // auto deduced size/type
}

std::vector vec{1,2,3}; // now possible! 
and now we can simplify the template arguments

/include <array>

template<typename ... Params>
auto get_data(const Params & ... params)
{
    return std::array{params...};
}


template<typename Numerator, typename Denominator>
auto divide(Numerator numerator, Denominator denominator)
{
    return numerator / denominator;
}


struct Double_Data {
    Double_Data(const std::size_t size) : data(new double[size] { }
    ~Double_Data() { delete [] data; }
    double *data;
   };

// I want one for ints!
struct Int_Data {
    Int_Data(const std::size_t size) : data(new int[size] { }
    ~Int_Data() { delete [] data; }
    int *data;
   };

// I want one for floats!
struct Float_Data {
    Float_Data(const std::size_t size) : data(new float[size] { }
    ~Float_Data() { delete [] data; }
    float *data;
   };


The only difference between them is that struct has all members by default public.
Using struct makes examples shorter and easier to read. 


auto lambda = [/*captures*/](int param1){ return param1 * 10; };

std::vector<int> ints{1, 2, 3, 4, 5};
auto even = [](int i){ return 0 == i % 2; };
auto square = [](int i){ return i * i; }; 

for (int i : ints | std::view::filter(even) | std::view::transform(square)) {
    std::cout << i << ' ';
}


auto lambda = [/*captures*/](int param1){ return param1 * 10; };


auto lambda = [param](int param1){ return param1 * 10; };


auto lambda = [&param](int param1){ return param1 * 10; };


int x = 42;
double y = 3.14;

auto lambda = [x, &y](int param1){ return x * param1 + y; };

    // x is captured by value, creating a copy
    // y is captured by reference, with access to original


template<typename Map>
void print_map(const Map &map, const std::string key_desc = "key",
                               const std::string value_desc = "value")
{
    for_each(begin(map), end(map),
        [&](auto &data) { /// Sick !!
                          /// This makes a generic lambda.
            std::cout << key_desc << ": '" << data.first << "' "
                      << value_desc << ": '" << data.second << "'\n";
            }
    );
}


auto lambda = [/*captures*/](auto ... params){
    return std::vector<int>{params...};
}

standard c++14


const auto data = [](){ // no parameters
    std::vector<int> result;
                        // fill result with things. 
    return result;
}();                    // immediately invoked


c++17 implementation, using type_traits
#include <type_traits>

template<typename T,
         std::enable_if_t<std::is_floating_point_v<T>, int> = 0>
auto func(T f) { return f * 3; }

template<typename T,
         std::enable_if_t<std::is_integral_v<T>, int> = 0>
auto func(T i) { return i + 3; }

C++20 implementation using concepts, 

#include <concepts>

auto func(std::floating_point auto f) { return f * 3; }
auto func(std::integral auto i) { return i + 3; }


int triple(int const i) { // we know parameters won't change
  return i * 3;
}

const double pi = 3.141593; // tells the compiler the value can't change

int main()
{
    const double radius = 1.5;
    const double area = pi * radius * radius;
    std::cout << area;

    // east const or west const, the same
    const int i = 5;
    int const j = 6;
}

Const everything that's not constexpr


#include <filesystem>
namespace fs = std::filesystem;

int main() {
    fs::path path = "your_directory_path";

    for (const auto &entry : fs::directory_iterator(path)) {
        const char *cstr = entry.path().c_str();
        std::cout << cstr << '\n';
    }
    return 0; // return success
}


const double pi = 3.141593;

int main()
{
   const double radius = 1.5;
   const double area = pi * radius * radius;
   std::cout << area;
}

constexpr double pi = 3.141593;

int main()
{
   const double radius = 1.5;
   const double area = pi * radius * radius;
   std::cout << area;
}


int porcupine = 3;
std::cout << &porcupine << "\n"; // Memory address
                                 // 0x7ffd7caa5b54

Dynamic Memory Allocation

int main() {
    int size = 5;
    int* dynamicArray = new int[size];

    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i + 1;
    }

    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }

    delete[] dynamicArray;
    return 0;
}


struct S {
    S() = default;
    S(S&&) = delete;
    S(const S &) = delete;
};

auto s_factory(){
    return S{}; // compiles in C++17, neither a copy nor a move.
}

#include <memory>

class Product {
public:
    virtual void use() const = 0;
};

class ConcreteProductA : public Product {
public:
    void use() const override {
        std::cout << "Using ConcreteProductA" << std::endl;
    }
};

class ConcreteProductB : public Product {
public:
    void use() const override {
        std::cout << "Using ConcreteProductB" << std::endl;
    }
};

class Factory {
public:
    std::unique_ptr<Product> createProduct(const std::string& productType) {
        if (productType == "A") {
            return std::make_unique<ConcreteProductA>();
        } else if (productType == "B") {
            return std::make_unique<ConcreteProductB>();
        } else {
            return nullptr;
        }
    }
};

int main() {
    Factory factory;
    
    std::unique_ptr<Product> productA = factory.createProduct("A");
    if (productA) {
        productA->use(); // Output: Using ConcreteProductA
    }
    
    std::unique_ptr<Product> productB = factory.createProduct("B");
    if (productB) {
        productB->use(); // Output: Using ConcreteProductB
    }
    
    return 0;
}



#include <memory>

class Product {
public:
    virtual void use() const = 0;
};

class ConcreteProductA : public Product {
public:
    void use() const override {
        std::cout << "Using ConcreteProductA" << std::endl;
    }
};

class ConcreteProductB : public Product {
public:
    void use() const override {
        std::cout << "Using ConcreteProductB" << std::endl;
    }
};

class AbstractFactory {
public:
    virtual std::unique_ptr<Product> createProduct() const = 0;
};

class ConcreteFactoryA : public AbstractFactory {
public:
    std::unique_ptr<Product> createProduct() const override {
        return std::make_unique<ConcreteProductA>();
    }
};

class ConcreteFactoryB : public AbstractFactory {
public:
    std::unique_ptr<Product> createProduct() const override {
        return std::make_unique<ConcreteProductB>();
    }
};

int main() {
    std::unique_ptr<AbstractFactory> factoryA = std::make_unique<ConcreteFactoryA>();
    std::unique_ptr<Product> productA = factoryA->createProduct();
    if (productA) {
        productA->use(); // Output: Using ConcreteProductA
    }
    
    std::unique_ptr<AbstractFactory> factoryB = std::make_unique<ConcreteFactoryB>();
    std::unique_ptr<Product> productB = factoryB->createProduct();
    if (productB) {
        productB->use(); // Output: Using ConcreteProductB
    }
    
    return 0;
}


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


------ city.hpp -------

class City { 
  std::string name;
  int population;
 
public:
  City(std::string new_name, int new_pop);
  ~City();  // destructor
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
  
  std::string get_title();   // getters
  std::string get_artist();
};

Song::Song(std::string new_title, std::string new_artist) // .cpp
  : title(new_title), artist(new_artist) {}

Song::~Song() {              // added destructor
  std::cout << "Goodbye " << title << "\n";
}

struct Double_Data {

    Double_Data(const std::size_t size)
      : data(new double[size] // allocate
    {
    }

    ~Double_Data() {          // destructor
      delete [] data;         // free
    }

    double *data;

};


    The object moves out of scope.
    The object is explicitly deleted.
    When the program ends.

void some_func() {
    std::string s{"Hello"};     // allocate a string
}                               // automatically frees it
                                // when scope exits


void some_func() {
    std::string s{"Hello"};     // allocate a string
}                               // automatically frees it
                                // when scope exits

Standard: c++ 98


std::array<int, 3> ar{1,2,3};
int* dyn_ar = new int[4];



For format see p.44 filetime puzzler book 1

S object_1("a","t");


thread_local object_2("a","t");


static object_3("a","t");


delete new S *object_4("a","t");


#include <format>
#include <string_view>

void print_map(const auto &map, const std::string_view &key_desc = "key",
                                const std::string_view &value_desc = "value")
{
    for (const auto &[key, value] : map) /// strucuted binding
    {
        std::puts(std::format("{}: '{}' {}: '{}'",
                         key_desc, key, value_desc, value).c_str());

        // this is genious spacing for readability
    }
}

Standard c++20


#include <string_view>
std::string_view sv{some_string_like_thing}; // no copy

Standard c++17

These are passed-by-value on purpose.
String_view are cheap to copy. It is recommended to pass them by value.
The following code doesn't create a string anymore, if doesn't have to.

void print_map(const auto &map, const std::string_view &key_desc = "key",
                                const std::string_view &value_desc = "value")
{
    for (const auto &[key, value] : map) /// strucuted binding
    {
        std::cout << key_desc << ": '" << key << "' "
                  << value_desc << ": '" << value << "'\n";
    }
}

int main()
{
    print_map(get_some_map(), "index", "location");
}


#include <format>
std::string s = fmt::format("I'd rathe be {1} than {0}.", "right", "happy");
// "I'd rather be happy than right."

Standard C++20


const auto &[elem1, elem2] = some_thing;

Standard c++17

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (const auto &[key, value] : map) // structured binding
    {
        std::cout << key_desc << ": '" << key << "' "
                  << value_desc << ": '" << value << "'\n";
    }
}


int main(int argc, char* argv[]) {
    return 0;
}


bool hasFlag(const std::vector<std::string>& arguments, const std::string& flag) {
    return std::find(arguments.begin(), arguments.end(), flag) != arguments.end();
}

int main(int argc, char* argv[]) {
    std::vector<std::string> arguments(argv + 1, argv + argc);

    if (arguments.size() == 0) {
        arguments.push_back("-help");
    }

    if (hasFlag(arguments, "-o")) {
        std::cout << "Flag -o for -omit is present!" << std::endl;
    }


std::cout << "Enter your password: ";
std::cin >> password;

#include <cstdlib>

int main() {
    std::string answer;
    std::cout << "Place the output in" << output_dir << "? [y/yes, n/no]: ";
    std::cin >> answer;

    if (answer == "y" || answer == "yes") {
    } else if (answer == "n" || answer == "no") {
    } else {
        std::cout << "Invalid response, exiting";
        std::exit(1) // (failure)
    }
    return 0;
}


  std::exit(0) (success)
  std::exit(1) (failure)

Void, Also refered as subroutine.

void oscar_wilde_quote() {
  std::cout << "The highest";
}


#include <filesystem>
#include <fstream> // Add this header for std::ofstream
namespace fs = std::filesystem;

int main() {
    fs::create_directories("sandbox/a");

    std::ofstream("sandbox/file.1.txt");     // is simplest, deletes instantly

    std::ofstream file("sandbox/file1.txt"); // initialize the variable on top!

    // Check if the file was opened successfully
    if (file.is_open()) {

        file << "This is some content written to the file.\n";

        file.close(); // Close the file after writing if no longer needed

    } else {
        std::cout << "Failed to open the file.\n";
    }

    return 0;
}


#include <filesystem>
#include <fstream>
namespace fs = std::filesystem;

int main() {

    fs::create_directories("sandbox/a");
    std::ofstream("sandbox/file1.txt");
    std::ofstream("sandbox/file2.txt");

    for (auto& p : fs::directory_iterator("sandbox")) {
        std::cout << p.path() << '\n';
    } 

fs::remove_all("sandbox");

}


#include <filesystem>
namespace fs = std::filesystem;

int main() {
    std::string path = "./foo";
    for (const auto &entry : fs::directory_iterator(path))
        std::cout << entry.path();
}


#include <chrono>
int main() {

  // Measure time taken for goodnight1():
  std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

  std::cout << goodnight1("tulip");

  std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> time_span = end - start;

  // Print time taken for goodnight1():
  std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";


alias g++="g++ -Wall -Werror -Wextra -pedantic -std=c++17"


    int: integers                   // 4 bytes
    double: floating-point numbers  // double 8 bytes
    char: individual characters     // 1 byte
    float:                          // 4 bytes
    long:                           // 4 or 8 bytes (platform dependent)
    long long:                      // 8 bytes
    bool: true/false                // 1 byte

    // use sizeof for size

std::cout << "Size of int: " << sizeof(numInt); 


constexpr double calculate_pi() {
    return 22/7;
}

constexpr auto pi = calculate_pi();

int main()
{
    const auto radius = 1.5;
    const auto area = pi * radius * radius;
    std::cout << area;

}

constexpr auto calculate_pi() {
    return 22/7;
}

constexpr auto pi = calculate_pi();

// east/ west const
const auto result = std::count( /*stuff */);
auto const result = std::count( /*stuff*/ );


std::cout << (coin == 0 ? "Heads" : "Tails") << "\n";


    ==              equal to
    !=              not equal to
    >               greater than
    <               less than
    >=              greater than or equal to
    <=              less than or equal to


    &&              and 
    ||              or
    !               not

    if (hunger && anger){}

    ( !true )       not false
    ( !(10 < 11) )  not condition 


reversed_text += text

std::string chapOnePath = parentDirectory + "/chap_1";


run() {
    {
        Is this in scope? //This variable is out of scope.?
    {
    
}


int age = 28;
std::cout << age << "years old.\n";

template <typename T>
struct MathOperation {
    T value;

    MathOperation(T val) : value(val) {}

    template <typename U>
    MathOperation<U> add(U val) {
        return MathOperation<U>(value + val);
    }

    template <typename U>
    MathOperation<U> multiply(U val) {
        return MathOperation<U>(value * val);
    }

    void print() {
        std::cout << "Result: " << value << std::endl;
    }
};

int main() {
    MathOperation<int> operation(5);
    operation.add(3).multiply(2).print();

    return 0; // return success
}


    std::cin            : Standard input stream for reading user input.
    std::cout           : Standard output stream for writing output.
    std::cerr           : Standard error stream for writing error messages (unbuffered).
    std::clog           : Standard error stream for writing log messages (buffered).
    std::ifstream       : Input file stream for reading from files.
    std::ofstream       : Output file stream for writing to files.
    std::fstream        : File stream for reading from and writing to files.
    std::istringstream  : Input string stream for reading from strings.
    std::ostringstream  : Output string stream for writing to strings.
    std::stringstream   : String stream for reading from and writing to strings.
    std::wcin           : Wide character version of std::cin for reading wide characters.
    std::wcout          : Wide character version of std::cout for writing wide characters.
    std::wcerr          : Wide character version of std::cerr for writing wide error messages.
    std::wclog          : Wide character version of std::clog for writing wide log messages.


#include <map>
#include <sstream>

int main() {
    std::string text = "lorem";

    for (char& c : text) {
        c = std::tolower(c);
    }

    std::map<std::string, int> wordfreq;
    std::istringstream iss(text);
    std::string word;

    while (iss >> word) { // count frequency
        wordfreq[word]++;
    }

    for (const auto& pair : wordfreq) { // display
        std::cout << pair.first << ": " << pair.second;
    }

    return 0; // return success
}


enum class Day {
    Monday,
    Tuesday,
    Wednesday,
};

int main() {
    Day today = Day::Tuesday;

    if (today == Day::Saturday || today == Day::Wednesday) {
    } else {}

    return 0; // return success
}

enum Color {
    Red,
    Green,
    Blue
};

void printColor(Color color) {
    switch (color) {
        case Red:
            break;
        case Green: // ...
            break;
        case Blue: // ...
            break;
    }
}

int main() {
    Color favoriteColor = Color::Green;
    printColor(favoriteColor);

    return 0; // return success
}


enum class Fruit {
    Apple,
    Banana,
    Orange
};

const std::array<std::string, 3> fruitNames = {
    "Apple",
    "Banana",
    "Orange"
}

const std::string fruitNames[] = { // c-style array
                                   // size by initializer
    "Apple",
    "Banana",
    "Orange"
};

int main() {
    Fruit selectedFruit = Fruit::Banana;
    int fruitIndex = static_cast<int>(selectedFruit);

    std::cout << "Selected fruit: " << fruitNames[fruitIndex] << std::endl;

    return 0; // return success
}


enum class Month {
    January,
    February,
    March // ...
};

const std::vector<std::string> monthNames = {
    "January",
    "February",
    "March" // ... 
};

int main() {
    Month currentMonth = Month::May;
    int monthIndex = static_cast<int>(currentMonth);

    std::cout << "Current month: " << monthNames[monthIndex] << std::endl;

    return 0; // return success
}


#include <array> // c++ 11
    std::array<char, 128> second = {'H', 'e', 'l'} // from library
                            // fixed size of 128
                            // has .begin(), .end(), .at(), .size() 

    sint arr[] = {1, 2, 3}; // c-style array 
                            // size determined by initializer's list
                            // fixed at compile-time 

std::array<Type, Size> data

#include <numeric>
#include <array>

template<typename Value_Type>
std::array<Value_Type, 3> get_data(const Value_Type &v1, const Value_type &v2,
                                   const Value_type &v3)
{
    std::array<Value_Type 3> data;
    data[0] = v1;
    data[1] = v2;
    data[2] = v3;
    return data;
}

// no dynamic allocation, 
// win-win scenario with knowing the size of the data struture at compile time.

template<typename> VT> // takes 3 parameters
std::array<VT, 3> get_data(const VT &v1, const VT &v2, const VT &v3)
{
    return {v1, v2, v3};
}

template<typename> VT> // takes 4 parameters
std::array<VT, 4> get_data(const VT &v1, const VT &v2, const VT &v3, const VT &v4))
{
    return {v1, v2, v3, v4};
}


int size = 5; // desired size of the array
int* dynamicArray = new int[size]; // allocate memory for the array

// Access and modify elements of the dynamic array
dynamicArray[0] = 10;
dynamicArray[1] = 20;
// ...

// Deallocate the memory when it's no longer needed
delete[] dynamicArray;

#include <array>

int main() {
    std::array<int, 3> ar{1,2,3};

    int* dyn_ar = new int[4];

    dyn_ar[0] = 10;
    dyn_ar[1] = 20;
    dyn_ar[2] = 30;
    dyn_ar[3] = 40;
    dyn_ar[4] = 50;
    dyn_ar[5] = 60;
    dyn_ar[6] = 70;

    for (int i = 0; i < 7; i++) {
        std::cout << dyn_ar[i] << " ";
    }
    std::cout << std::endl; // prints 10, 20, 30, 40.. 70.

    delete[] dyn_ar;

    return 0; // return success
}



  std::vector<double> subway_adult; // value is 0.0 is default
  std::vector<double> location(2); // initialize two elements! 
}

std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
std::vector vec{1,2,3}; // now possible! 

int main(int argc, char* argv[]) {
    std::vector<std::string> arguments(argv + 1, argv + argc);
}

template<typename Value_Type>
std::vector<Value_Type> get_data(const Value_Type &v1, const Value_Type &v2,
                                 const Value_Type &v3)

{
    std::vector<Value_Type> data;
    data.push_back(v1);
    data.push_back(v2);
    data.push_back(v3);
    return data;
}


template<typename Value_Type>
struct Data {
    Data(const std::size_t size)
      : data(new Value_Type[size]) // constructor
    {
    }

    ~Data() { delete [] data; }

    Value_Type *data;
};


if (coin == 0) {
} else {}
}


int main() {
  int number = 9;
  switch(number) {
    case 1 : // ...
      std::cout << "case one";
      break;
    case 2 :
      break;
    default : // ...
      break;
  }
}


while (guess != 8) {
  std::cout << "Wrong guess, try again: ";
  std::cin >> guess;
}

for (int i = 0; i < 20; i++) {}  // incrementing
for (int i = 20; i > 0; i--) {}  // decrementing


#include <format>
#include <string_view>

void print_map(const auto &map,
               const std::string_view &key_desc = "key",
               const std::string_view &value_desc = "value")
{
    const auto print_key_value = [&](const auto &data) { 
        const auto &[key, value] = data;
        std::puts(std::format("{}: '{}' {}: '{}'",
                         key_desc, key, value_desc, value).c_str());
    };

    for_each(map, print_key_value);
}

#include <ranges>

int main()
{
    std::vector<int> ints{1, 2, 3, 4, 5};
    auto even = [](int i){ return 0 == i % 2; };
    auto square = [](int i){ return i * i; };
                                              
    for (int i : ints | std::view::filter(even) | std::view::transform(square)) {
        std::cout << i << ' ';
    }
}


auto even = [](int i){ return 0 == i % 2; };
auto square = [](int i){ return i * i; };

for (int i : ints | std::view::filter(even) | std::view::transform(square)) {
    std::cout << i << ' ';
}

`ints`: The input range of integers.
`std::view::filter(even)`: Filters the `ints` range, keeping only the even numbers.
`std::view::transform(square)`: Transforms the filtered range by squaring each element.
`int i : ...`: Iterates over the resulting transformed range and assigns each element to `i`.
`std::cout << i << ' ';`: Prints each element `i` separated by a space.



for (const auto &element : container) {}

std::string str = "Hello";
for (char character : str) {
    std::cout << character << '\n';
}

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (const auto &data : map)
    {
        std::cout << key_desc << ": '" << data_itr->first << "' "
                  << value_desc << ": '" << data_itr->second << "'\n";
    }
}

for (const auto &value : container) {} // for each element in the container

Use clang-tidy's modernize-loop-convert check.

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (const auto &data : map)
    {
        std::cout << key_desc << ": '" << data.first << "' "
                  << value_desc << ": '" << data.second << "'\n";
    }
}


void eat() {
  std::cout << "nom nom\n";
}

bool even(int num) {
  return ( num % 2 == 0 ? true : false );
  // this should be tested
}


inline 
void eat() {
  std::cout << "nom nom\n";
}

-- single line in header file is slower --
void Cookie::eat() {std::cout << "nom nom\n";}

-- goodnight.cpp --
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}
-- goodnight.h --
std::string goodnight1(std::string thing1);

-- night.hpp -- 
inline
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}


class Musician {
private:
    int instruments;

public:
    int getMyVariable() const {
        return myVariable;
    }

    void setMyVariable(int newValue) {
        myVariable = newValue;
    }
};

int main() {
    MyClass obj;
    obj.setMyVariable(42);

    int value = obj.getMyVariable();
    return 0;
}


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


// one must be true
    Each has different type parameters.
    Each has a different number of parameters.
    
-- num.cpp --
int fancy_number(int num1, int num2) {
  return num1 - num2 + (num1 * num2);
}

int fancy_number(int num1, int num2, int num3) {
  return num1 - num2 - num3 + (num1 * num2 * num3);
} // different number of params.

int fancy_number(double num1, double num2) {
  return num1 - num2 + (num1 * num2);
}               // different type of params.

-- num.hpp --
int fancy_number(int num1, int num2);
int fancy_number(int num1, int num2, int num3);
int fancy_number(double num1, double num2);


void get_emergency_number(std::string emergency_number) {}

struct ComplexType {
    int value;
    std::vector<int> data;
};

void processComplexType(const ComplexType& complexParam) {
    std::cout << "Value: " << complexParam.value << std::endl;
    std::cout << "Data:";
    for (int num : complexParam.data) {
        std::cout << " " << num;
    }
    std::cout << std::endl;
}

int main() {
    ComplexType complexObj;
    complexObj.value = 42;
    complexObj.data = {1, 2, 3, 4, 5};

    processComplexType(complexObj);

    return 0;
}

Many Parameters

double get_tip(double price, double tip, bool total_included) {
    get_tip(0.25, true, 45.50); // will not work. Order matters. 
}

void name_x_times(std::string name, int x){
  while (x > 0) {
    std::cout << name << "\n";
    x--;
  }
}


void useless_function(int val) {
    val = val * 2;
}


void swap_num(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}
 
int main() {
  int a = 100;
  int b = 200;
 
  swap_num(a, b);
}

int triple(int &i) {
  i = i * 3;
  return i;
}

int main() {
  int num = 1;
  std::cout << triple(num) << "\n";
}

template<typename T>
void modifyVector(std::vector<T>& vec) {
    for (auto& element : vec) {
        element *= 2;
    }
}

template<typename T>
void printVector(const std::vector<T>& vec) {
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    printVector(numbers);  // Output: Original vector: 1 2 3 4 5
    modifyVector(numbers);

    printVector(numbers);  // Output: Modified vector: 2 4 6 8 10
    return 0;
}


struct Chapters {
    bool IsToPrint = true;
};

struct Chapters {
    bool IsToPrint;

    Chapters() : IsToPrint(true) {} // with default constructor
};

int main() {
    Chapters c1;
    Chapters c2 = {false}; //  list initialization
                           // works when only one bool in struct

    // c1.IsToPrint will be true
    // c2.IsToPrint will be false

    return 0;
}


void intro(std::string name, std::string lang = "C++");


int &sonny = songqiao; // Sonny, a reference to songqiao;

\\ Changes to the reference happens to the original.
\\ Aliases cannot be changed to alias something else.

  int soda = 99;
  int &pop = soda;
  pop++; // soda and pop equal at 100

Using a reference (&) instead of making a copy of the elements is more efficient,
especially when dealing with large objects or containers. 

By using a reference, the loop avoids creating a new copy of each element
, reducing unnecessary memory usage and improving performance.

struct ComplexStruct {
    int value1;
    int value2;
};

void modifyStruct(ComplexStruct& ref) {
    ref.value1 = 100;
    ref.value2 = 200;
}

int main() {
    int x = 10;
    int& ref1 = x;              // Reference variable ref1 refers to x
    ref1 = 20;                  // Modifying ref1 will also modify x

    ComplexStruct obj;
    obj.value1 = 50;
    obj.value2 = 60;
    ComplexStruct& ref2 = obj;  // Reference variable ref2 refers to obj

    modifyStruct(ref2);         // Modifying ref2 will also modify obj
    return 0;
}


Declaration? * creates a pointer.
Not a declaration? * is a dereference operator.

int main() {
  int power = 9000;
  int* ptr = &power;
  std::cout << *ptr; // prints 9000
}


//Calling swap_num(), variables a and b's value will be modified
//because they are passed by reference

void swap_num(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}
 
int main() {
  int a = 100;
  int b = 200;
 
  swap_num(a, b);
 
  std::cout << "A is " << a << "\n";
  std::cout << "B is " << b << "\n";
}

WHEN? To MODIFY the arguments’ values.

int triple(int &i) {
  i = i * 3;
  
  return i;
}

int main() {
  int num = 1;
  std::cout << triple(num) << "\n";
}

template<typename T>
void modifyVector(std::vector<T>& vec) {
    for (auto& element : vec) {
        element *= 2;
    }
}

template<typename T>
void printVector(const std::vector<T>& vec) {
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Original vector: ";
    printVector(numbers);  // Output: Original vector: 1 2 3 4 5

    modifyVector(numbers);

    std::cout << "Modified vector: ";
    printVector(numbers);  // Output: Modified vector: 2 4 6 8 10

    return 0;
}


int triple(const int &i) { // save computational cost
  return i * 3;            // don't make a copy of the argument
}

int square(const int &i) {
  return i * i;
}

int main() {
  int side = 5;
  std::cout << square(side) << "\n";
}


int soda = 99; 
int &pop = soda;
pop++;


int porcupine = 3; 
std::cout << &porcupine << "\n"; 

// 0x7ffd7caa5b54


Declaration? * creates a pointer.
Not a declaration? * is a dereference operator.

int main() {
  int power = 9000;
  int* ptr = &power;
  std::cout << *ptr; // prints 9000
}

int* number;         // Declaring
double* decimal;
char* character;

int gum = 8;
int* ptr = &gum;     // int* [declare a pointer]
                     // ptr [pointer's name]
                     // &gum [store gum's memory address in ptr]

int* number;         // Declaration standard
int *number;
int * number;        // All Synthaxically valid



int* ptr; // declared, not yet initialized


int* ptr = nullptr;


class Factory {
public:
    std::unique_ptr<Product> createProduct(const std::string& productType) {
        if (productType == "A") {
            return std::make_unique<ConcreteProductA>();

            // make unique
            // create an instance of std::unique_ptr


        } else if (productType == "B") {
            return std::make_unique<ConcreteProductB>();
        } else {
            return nullptr;
        }
    }
};

#include <memory>

int main() {
    std::unique_ptr<int> num_ptr = std::make_unique<int>(42);
    // num_ptr owns the dynamically allocated integer

    // ...
    
    return 0;
}



int main() {
    int value = 5;
    int* ptr = &value;
    int** ptrToPtr = &ptr;

    return 0;
}


A C++ class is a user-defined type.

class City {
}; // needs semicolon


Class components are called class members
Attributes and methods are class members

class City {
  int population; // attribute
 
public:
  void add_resident() { // method
    population++;
  }
};


#include <span>

void printSpan(std::span<int> sp) {
    for (int element : sp) {}
}

int main() {
    std::array<int,5> arr{1, 2, 3, 4, 5};
    std::span<int> span(arr, 5);

    printSpan(span); // takes span and prints elements
    return 0;
}


template <typename meaningful_Type>
meaningful_Type get_smallest(meaningful_Type num1, meaningful_Type num2) {
  return num2 < num1? num2 : num1;
}

int main() {
  std::cout << get_smallest(100, 60) << "\n";
  std::cout << get_smallest(2543.2, 3254.3) << "\n";
}

template types are generated by the compiler at compile time
Do not need any kind of type-erasure (like Java generics do)

Highly efficient runtime code possible, 
as good as (or better than) hand writing the various options
template system is Turing complete (not necessarily a good thing)

    template<typename SomeType>
    struct S { // struct can do anything it wants with this type
    };

// declare a class template that can hold anything we want
template<typename Value_Type>
struct Data {
    Data(const std::size_t size)
      : data(new Value_Type[size])
    {
    }

    ~Data() { delete [] data; }

    Value_Type *data;
};

// declare a function template that take 3 params of the same type
// and passes that type on to the 'Data' template

template<typename Value_Type>
Data<Value_Type> get_data(const Value_Type &v1, const Value_Type &v2,
                          const Value_type &v3)
{
    {Data<Value_Type> d(3);
    d.data[0] = v1; d.data[1] = v2; d.data[2] = v3;
    return d;
}


template<typename T>
T divide(T numerator, T denominator) {
    return numerator / denominator;
}


#include <array>

// require at least one parameter and it sets the type
template<typename VT, typename ... Params>
std::array<VT, sizeof...(Params)+1> get_data(const VT &v1, const Params& ...params)
{
    return {v1, params...};
}


template<typename VT, Typename ... P> // variadic template
std::array<VT, sizeof...(P)> get_data(const P & ... params) // param expansion
{
    return {params...}; // pack expansion
}

template<typename> VT>
std::array<VT, 3> get_data(const VT &v1, const VT &v2, const VT &v3) // 3 params
{
    std::array<VT, 3> data;
    data[0] = v1; data[1] = v2; data[2] = v3;
    return data;
}

template<typename> VT>
std::array<VT, 2> get_data(const VT &v1, const VT &v2) // 2 params
{
    std::array<VT, 2> data;
    data[0] = v1; data[1] = v2;
    return data;
}

template<typename> VT>
std::array<VT, 1> get_data(const VT &v1) // 1 params
{
    std::array<VT, 1> data;
    data[0] = v1;
    return data;
}

// This bothers.
template<typename Value_Type>
struct Data {
    Data(const std::size_t size)
      : data(new Value_Type[size])
    {
    }

    ~Data() { delete [] data; }

    Value_Type *data;
};


template<typename VT, typename ... Params>
auto get_data(const VT &v1, const Params & ... params)
{
    return std::array{v1, params...}; // auto deduced size/type
}

std::vector vec{1,2,3}; // now possible! 
and now we can simplify the template arguments

/include <array>

template<typename ... Params>
auto get_data(const Params & ... params)
{
    return std::array{params...};
}


template<typename Numerator, typename Denominator>
auto divide(Numerator numerator, Denominator denominator)
{
    return numerator / denominator;
}


struct Double_Data {
    Double_Data(const std::size_t size) : data(new double[size] { }
    ~Double_Data() { delete [] data; }
    double *data;
   };

// I want one for ints!
struct Int_Data {
    Int_Data(const std::size_t size) : data(new int[size] { }
    ~Int_Data() { delete [] data; }
    int *data;
   };

// I want one for floats!
struct Float_Data {
    Float_Data(const std::size_t size) : data(new float[size] { }
    ~Float_Data() { delete [] data; }
    float *data;
   };


The only difference between them is that struct has all members by default public.
Using struct makes examples shorter and easier to read. 


auto lambda = [/*captures*/](int param1){ return param1 * 10; };

std::vector<int> ints{1, 2, 3, 4, 5};
auto even = [](int i){ return 0 == i % 2; };
auto square = [](int i){ return i * i; }; 

for (int i : ints | std::view::filter(even) | std::view::transform(square)) {
    std::cout << i << ' ';
}


auto lambda = [/*captures*/](int param1){ return param1 * 10; };


auto lambda = [param](int param1){ return param1 * 10; };


auto lambda = [&param](int param1){ return param1 * 10; };


int x = 42;
double y = 3.14;

auto lambda = [x, &y](int param1){ return x * param1 + y; };

    // x is captured by value, creating a copy
    // y is captured by reference, with access to original


template<typename Map>
void print_map(const Map &map, const std::string key_desc = "key",
                               const std::string value_desc = "value")
{
    for_each(begin(map), end(map),
        [&](auto &data) { /// Sick !!
                          /// This makes a generic lambda.
            std::cout << key_desc << ": '" << data.first << "' "
                      << value_desc << ": '" << data.second << "'\n";
            }
    );
}


auto lambda = [/*captures*/](auto ... params){
    return std::vector<int>{params...};
}

standard c++14


const auto data = [](){ // no parameters
    std::vector<int> result;
                        // fill result with things. 
    return result;
}();                    // immediately invoked


c++17 implementation, using type_traits
#include <type_traits>

template<typename T,
         std::enable_if_t<std::is_floating_point_v<T>, int> = 0>
auto func(T f) { return f * 3; }

template<typename T,
         std::enable_if_t<std::is_integral_v<T>, int> = 0>
auto func(T i) { return i + 3; }

C++20 implementation using concepts, 

#include <concepts>

auto func(std::floating_point auto f) { return f * 3; }
auto func(std::integral auto i) { return i + 3; }


int triple(int const i) { // we know parameters won't change
  return i * 3;
}

const double pi = 3.141593; // tells the compiler the value can't change

int main()
{
    const double radius = 1.5;
    const double area = pi * radius * radius;
    std::cout << area;

    // east const or west const, the same
    const int i = 5;
    int const j = 6;
}

Const everything that's not constexpr


#include <filesystem>
namespace fs = std::filesystem;

int main() {
    fs::path path = "your_directory_path";

    for (const auto &entry : fs::directory_iterator(path)) {
        const char *cstr = entry.path().c_str();
        std::cout << cstr << '\n';
    }
    return 0; // return success
}


const double pi = 3.141593;

int main()
{
   const double radius = 1.5;
   const double area = pi * radius * radius;
   std::cout << area;
}

constexpr double pi = 3.141593;

int main()
{
   const double radius = 1.5;
   const double area = pi * radius * radius;
   std::cout << area;
}


int porcupine = 3;
std::cout << &porcupine << "\n"; // Memory address
                                 // 0x7ffd7caa5b54

Dynamic Memory Allocation

int main() {
    int size = 5;
    int* dynamicArray = new int[size];

    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i + 1;
    }

    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }

    delete[] dynamicArray;
    return 0;
}


struct S {
    S() = default;
    S(S&&) = delete;
    S(const S &) = delete;
};

auto s_factory(){
    return S{}; // compiles in C++17, neither a copy nor a move.
}

#include <memory>

class Product {
public:
    virtual void use() const = 0;
};

class ConcreteProductA : public Product {
public:
    void use() const override {
        std::cout << "Using ConcreteProductA" << std::endl;
    }
};

class ConcreteProductB : public Product {
public:
    void use() const override {
        std::cout << "Using ConcreteProductB" << std::endl;
    }
};

class Factory {
public:
    std::unique_ptr<Product> createProduct(const std::string& productType) {
        if (productType == "A") {
            return std::make_unique<ConcreteProductA>();
        } else if (productType == "B") {
            return std::make_unique<ConcreteProductB>();
        } else {
            return nullptr;
        }
    }
};

int main() {
    Factory factory;
    
    std::unique_ptr<Product> productA = factory.createProduct("A");
    if (productA) {
        productA->use(); // Output: Using ConcreteProductA
    }
    
    std::unique_ptr<Product> productB = factory.createProduct("B");
    if (productB) {
        productB->use(); // Output: Using ConcreteProductB
    }
    
    return 0;
}



#include <memory>

class Product {
public:
    virtual void use() const = 0;
};

class ConcreteProductA : public Product {
public:
    void use() const override {
        std::cout << "Using ConcreteProductA" << std::endl;
    }
};

class ConcreteProductB : public Product {
public:
    void use() const override {
        std::cout << "Using ConcreteProductB" << std::endl;
    }
};

class AbstractFactory {
public:
    virtual std::unique_ptr<Product> createProduct() const = 0;
};

class ConcreteFactoryA : public AbstractFactory {
public:
    std::unique_ptr<Product> createProduct() const override {
        return std::make_unique<ConcreteProductA>();
    }
};

class ConcreteFactoryB : public AbstractFactory {
public:
    std::unique_ptr<Product> createProduct() const override {
        return std::make_unique<ConcreteProductB>();
    }
};

int main() {
    std::unique_ptr<AbstractFactory> factoryA = std::make_unique<ConcreteFactoryA>();
    std::unique_ptr<Product> productA = factoryA->createProduct();
    if (productA) {
        productA->use(); // Output: Using ConcreteProductA
    }
    
    std::unique_ptr<AbstractFactory> factoryB = std::make_unique<ConcreteFactoryB>();
    std::unique_ptr<Product> productB = factoryB->createProduct();
    if (productB) {
        productB->use(); // Output: Using ConcreteProductB
    }
    
    return 0;
}


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


------ city.hpp -------

class City { 
  std::string name;
  int population;
 
public:
  City(std::string new_name, int new_pop);
  ~City();  // destructor
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
  
  std::string get_title();   // getters
  std::string get_artist();
};

Song::Song(std::string new_title, std::string new_artist) // .cpp
  : title(new_title), artist(new_artist) {}

Song::~Song() {              // added destructor
  std::cout << "Goodbye " << title << "\n";
}

struct Double_Data {

    Double_Data(const std::size_t size)
      : data(new double[size] // allocate
    {
    }

    ~Double_Data() {          // destructor
      delete [] data;         // free
    }

    double *data;

};


    The object moves out of scope.
    The object is explicitly deleted.
    When the program ends.

void some_func() {
    std::string s{"Hello"};     // allocate a string
}                               // automatically frees it
                                // when scope exits


void some_func() {
    std::string s{"Hello"};     // allocate a string
}                               // automatically frees it
                                // when scope exits

Standard: c++ 98


std::array<int, 3> ar{1,2,3};
int* dyn_ar = new int[4];



For format see p.44 filetime puzzler book 1

S object_1("a","t");


thread_local object_2("a","t");


static object_3("a","t");


delete new S *object_4("a","t");


#include <format>
#include <string_view>

void print_map(const auto &map, const std::string_view &key_desc = "key",
                                const std::string_view &value_desc = "value")
{
    for (const auto &[key, value] : map) /// strucuted binding
    {
        std::puts(std::format("{}: '{}' {}: '{}'",
                         key_desc, key, value_desc, value).c_str());

        // this is genious spacing for readability
    }
}

Standard c++20


#include <string_view>
std::string_view sv{some_string_like_thing}; // no copy

Standard c++17

These are passed-by-value on purpose.
String_view are cheap to copy. It is recommended to pass them by value.
The following code doesn't create a string anymore, if doesn't have to.

void print_map(const auto &map, const std::string_view &key_desc = "key",
                                const std::string_view &value_desc = "value")
{
    for (const auto &[key, value] : map) /// strucuted binding
    {
        std::cout << key_desc << ": '" << key << "' "
                  << value_desc << ": '" << value << "'\n";
    }
}

int main()
{
    print_map(get_some_map(), "index", "location");
}


#include <format>
std::string s = fmt::format("I'd rathe be {1} than {0}.", "right", "happy");
// "I'd rather be happy than right."

Standard C++20


const auto &[elem1, elem2] = some_thing;

Standard c++17

template<typename Map>
void print_map(const Map &map, const std::string &key_desc = "key",
                               const std::string &value_desc = "value")
{
    for (const auto &[key, value] : map) // structured binding
    {
        std::cout << key_desc << ": '" << key << "' "
                  << value_desc << ": '" << value << "'\n";
    }
}


int main(int argc, char* argv[]) {
    return 0;
}


bool hasFlag(const std::vector<std::string>& arguments, const std::string& flag) {
    return std::find(arguments.begin(), arguments.end(), flag) != arguments.end();
}

int main(int argc, char* argv[]) {
    std::vector<std::string> arguments(argv + 1, argv + argc);

    if (arguments.size() == 0) {
        arguments.push_back("-help");
    }

    if (hasFlag(arguments, "-o")) {
        std::cout << "Flag -o for -omit is present!" << std::endl;
    }


std::cout << "Enter your password: ";
std::cin >> password;

#include <cstdlib>

int main() {
    std::string answer;
    std::cout << "Place the output in" << output_dir << "? [y/yes, n/no]: ";
    std::cin >> answer;

    if (answer == "y" || answer == "yes") {
    } else if (answer == "n" || answer == "no") {
    } else {
        std::cout << "Invalid response, exiting";
        std::exit(1) // (failure)
    }
    return 0;
}


  std::exit(0) (success)
  std::exit(1) (failure)

Void, Also refered as subroutine.

void oscar_wilde_quote() {
  std::cout << "The highest";
}


#include <filesystem>
#include <fstream> // Add this header for std::ofstream
namespace fs = std::filesystem;

int main() {
    fs::create_directories("sandbox/a");

    std::ofstream("sandbox/file.1.txt");     // is simplest, deletes instantly

    std::ofstream file("sandbox/file1.txt"); // initialize the variable on top!

    // Check if the file was opened successfully
    if (file.is_open()) {

        file << "This is some content written to the file.\n";

        file.close(); // Close the file after writing if no longer needed

    } else {
        std::cout << "Failed to open the file.\n";
    }

    return 0;
}


#include <filesystem>
#include <fstream>
namespace fs = std::filesystem;

int main() {

    fs::create_directories("sandbox/a");
    std::ofstream("sandbox/file1.txt");
    std::ofstream("sandbox/file2.txt");

    for (auto& p : fs::directory_iterator("sandbox")) {
        std::cout << p.path() << '\n';
    } 

fs::remove_all("sandbox");

}


#include <filesystem>
namespace fs = std::filesystem;

int main() {
    std::string path = "./foo";
    for (const auto &entry : fs::directory_iterator(path))
        std::cout << entry.path();
}


#include <chrono>
int main() {

  // Measure time taken for goodnight1():
  std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

  std::cout << goodnight1("tulip");

  std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> time_span = end - start;

  // Print time taken for goodnight1():
  std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";


alias g++="g++ -Wall -Werror -Wextra -pedantic -std=c++17"

