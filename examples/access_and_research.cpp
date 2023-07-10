
at()            - Only for Maps.
                - returns an reference to the element. Can list std::out_of_range exception, I think? 
operator[]      - Only for Maps.
                - returns a reference to the element
count()         - returns number of elements matching the given key
find()          - finds an element with given key
lower_bound()   - return an iterator to the first element < (less than) the given key
upper_bound()   - return an iterator to the first element > (less than) the given key
equal_range()   - find a range of elements that are equivalent to a given value in a sorted container

#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {2, 4, 6, 8, 10};

    auto it = std::find(numbers.begin(), numbers.end(), 6);

    if (it != numbers.end()) {
        std::cout << "Value 6 found at index: " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << "Value 6 not found" << std::endl;
    }

    return 0;
}

#include <set>
#include <algorithm>

int main() {
    std::multiset<int> numbers = {1, 2, 3, 3, 3};

    // Find the range of elements equal to 3 in the multiset
    auto range = numbers.equal_range(3);

    // Print the elements in the range
    std::cout << "Elements equal to 3: ";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Elements equal to 3: 3 3 3

    return 0;
}

