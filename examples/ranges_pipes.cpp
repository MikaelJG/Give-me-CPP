
auto even = [](int i){ return 0 == i % 2; };
auto square = [](int i){ return i * i; };

for (int i : ints | std::view::filter(even) | std::view::transform(square)) {
    std::cout << i << ' ';
}

`ints`: The input range of integers.
`std::view::filter(even)`: Filters the `ints` range, keeping only the even numbers.
`std::view::transform(square)`: Transforms the filtered range by squaring each element.
`int i : ...`: Iterates over the resulting transformed range and assigns each element to `i`.
`std::cout << i << ' ';`: Prints each element `i` separated by a space.


auto even = [](int i){ return 0 == i % 2; };
auto square = [](int i){ return i * i; };

for (int i : ints | std::view::filter(even) | std::view::transform(square)) {
    std::cout << i << ' ';
}

`ints`: The input range of integers.
`std::view::filter(even)`: Filters the `ints` range, keeping only the even numbers.
`std::view::transform(square)`: Transforms the filtered range by squaring each element.
`int i : ...`: Iterates over the resulting transformed range and assigns each element to `i`.
`std::cout << i << ' ';`: Prints each element `i` separated by a space.

