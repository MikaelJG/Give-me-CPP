

#include <iostream>
enum class Fruit {
    Apple,
    Banana,
    Orange,
    Mango
};

const std::string fruitNames[] = { // old array 
    "Apple",
    "Banana",
    "Orange",
    "Mango"
};

int main() {
    Fruit selectedFruit = Fruit::Banana;
    int fruitIndex = static_cast<int>(selectedFruit);

    std::cout << "Selected fruit: " << fruitNames[fruitIndex] << std::endl;

    return 0;
}

