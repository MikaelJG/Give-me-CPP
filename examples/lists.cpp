
std::list mylist{100, 20 , 300, 40, 500, 20, 100};
mylist.sort();
mylist.unique();

for (size_t i = 0; i < love.size(); i++)
    std::cout << love[i] 
                        // impossible, 
                        // no support for subscript
                        // operator []

#include <list>

int main() {
    std::list<int> love{20, 30, 40};

    for (const auto& element : love) {
        std::cout << element << '\n';
    }

    return 0;
}

