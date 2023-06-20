
int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Inserting a new element at the beginning
    numbers.insert(numbers.begin(), 0);

    // Inserting a new element at index 3
    numbers.insert(numbers.begin() + 3, 10);

    // Inserting multiple elements at index 2
    numbers.insert(numbers.begin() + 2, {7, 8, 9});

    // Printing the modified vector
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <list>

struct Person {
    std::string name;
    int age;

    Person(const std::string& n, int a) : name(n), age(a) {}
};

int main() {
    std::list<Person> people;

    // Inserting elements in sorted order based on age
    people.insert(people.begin(), {"Alice", 25});
    people.insert(people.begin(), {"Bob", 30});
    people.insert(people.begin(), {"Charlie", 20});

    // Inserting an element after finding a specific person
    auto it = std::find_if(people.begin(), people.end(), [](const Person& p) {
        return p.name == "Bob";
    });
    if (it != people.end()) {
        people.insert(std::next(it), {"David", 27});
    }

    // Printing the list of people
    for (const auto& person : people) {
        std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
    }

    return 0;
}


