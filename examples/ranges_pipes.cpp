
auto even = [](int i){ return 0 == i % 2; };
auto square = [](int i){ return i * i; };

for (int i : ints | std::view::filter(even) | std::view::transform(square)) {
    std::cout << i << ' ';
}

