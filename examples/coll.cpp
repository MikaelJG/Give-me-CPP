
double *get_data() {
    double *data = new double[3];

    data[0] = 1.1;
    data[1] = 2.2;
    data[2] = 3.3;

    return data;
}

struct Double_Data {
    Double_Data(const std::size_t size) : data(new double[size] {} // allocate
    ~Double_Data() { delete [] data; }
    double *data;
   };

Double_Data get_data() {
    Double_Data data(3);
    data.data[0] = 1.1; data.data[1] = 2.2; data.data[2] = 3.3;
    return data;
   };

double sum_data(const Double_Data &d) {
    return d.data[0] + d.data[1] + d.data[2];
}

int main() {
    return sum_data(get_data()); // no leak, but we'll come back to it
}

#include <vector>
#include <map>

struct Person {
    std::string name;
    int age;
    std::vector<std::string> hobbies;
};

int main() {
    std::vector<Person> people = {
        {"Alice", 25, {"Reading", "Painting"}},
        {"Bob", 30, {"Gaming", "Hiking"}},
        {"Charlie", 20, {"Cooking", "Photography"}}
    };

    std::map<std::string, Person> personMap;
    for (const auto& person : people) {
        personMap[person.name] = person;
    }

    for (const auto& pair : personMap) {
        std::cout << "Name: " << pair.first << std::endl;
        std::cout << "Age: " << pair.second.age << std::endl;
        std::cout << "Hobbies: ";
        for (const auto& hobby : pair.second.hobbies) {
            std::cout << hobby << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

