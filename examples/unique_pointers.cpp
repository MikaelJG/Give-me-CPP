
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


