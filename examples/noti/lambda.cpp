
// Example 1: A basic lambda function that takes two integers as parameters and returns their sum.

auto sum = [](int a, int b) { return a + b; };
std::cout << sum(3, 4) << std::endl; // Output: 7

// Example 2: A lambda function that sorts a vector of integers in ascending order using std::sort.

std::vector<int> numbers{ 5, 2, 8, 1, 9, 4 };
std::sort(numbers.begin(), numbers.end(), [](int a, int b) { return a < b; });
for (int num : numbers) {
    std::cout << num << " ";
}
// Output: 1 2 4 5 8 9

