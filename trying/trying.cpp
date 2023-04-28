# include <iostream>
# include <vector>
# include <string>

struct Person {
    std::string name;
    std::vector<int> fav_numbers;
    int age;
    bool isMale;
};

int main() {
    Person john; // create person

    john.name = "John";
    john.fav_numbers = {1, 2, 3};
    john.age = 30;
    john.isMale = true;

    for (int integer = 0; integer < john.fav_numbers.size(); integer++) {
        std::cout << john.fav_numbers[integer] << " ";
    }
    std::cout << std::endl;
    std::cout << "Name: " << john.name << std::endl;
    std::cout << "Age: " << john.age << std::endl;
    std::cout << "Is Male: " << (john.isMale ? "Yes" : "No") << std::endl;

    return 0;
}
