
begin() - returns an iterator on the first element 
end() - returns an iterator after the last element
cbegin() - version constant of begin() and end()
cend() - 
rbegin() - returns a reverse iterator pointing to the last element of a container
rend() - returns an iterator pointing to one position before the beginning
before_begin() - Only for forward_list! 
                 returns an iterator pointing to the position
                 before the first element in a container.  
cbefore_begin() - Only for forward_list!
                  Constant version of before_begin()

#include <vector>

int main() {
    std::vector<int> numbers{1, 2, 3, 4, 5};

    // Using rbegin() to iterate over elements in reverse order
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        std::cout << *it << " ";
    }

        // 5 4 3 2 1

    return 0;
}

#include <forward_list>

int main() {
    std::forward_list<int> numbers{2, 3, 4};

    // Inserting an element at the beginning using before_begin()
    numbers.insert_after(numbers.before_begin(), 1);

    // Printing the elements
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    
        // 1 2 3 4

    return 0;
}


Forward_list doesn't have support for rbegin() / rend() or
crbegin() / crend()


size()     - returns the number of elements
             not available for forward_lists
max_size() - returns the maximum amount of elements that can be
             stocked in a container
resize()   - resize the container, to a new capacity
             not available for arrays
empty()    - returns true if container is empty, else false

