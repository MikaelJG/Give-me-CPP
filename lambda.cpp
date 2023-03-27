
// Example 1: A basic lambda function that takes two integers as parameters and returns their sum.

auto sum = [](int a, int b) { return a + b; };
std::cout << sum(3, 4) << std::endl; // Output: 7

// Explanation: The auto keyword is used to define a lambda expression and assign it to a variable called sum. The lambda expression takes two integer parameters a and b, and returns their sum using the + operator. Finally, the lambda function is called with arguments 3 and 4, and the result is printed to the console.

// Example 2: A lambda function that sorts a vector of integers in ascending order using std::sort.

std::vector<int> numbers{ 5, 2, 8, 1, 9, 4 };
std::sort(numbers.begin(), numbers.end(), [](int a, int b) { return a < b; });
for (int num : numbers) {
    std::cout << num << " ";
}
// Output: 1 2 4 5 8 9


// Explanation: The lambda expression is passed as the third argument to the std::sort algorithm, which sorts the vector in ascending order. The lambda expression takes two integer parameters a and b, and returns true if a is less than b, and false otherwise. Finally, the sorted vector is printed to the console using a range-based for loop.
