
std::vector<double> subway_adult; // value is 0.0 is default
std::vector<double> location(2); // initialize two elements! 

std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
std::vector vec{1,2,3}; // now possible! 

int main(int argc, char* argv[]) {
    std::vector<std::string> arguments(argv + 1, argv + argc);
}

#include <vector>

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

