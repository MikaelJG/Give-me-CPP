
#include <chrono>
std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
    // function
std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
std::chrono::duration<double, std::milli> time_span = end - start;

std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";


No examples for compilers.

