
auto lambda = [/*captures*/](int param1){ return param1 * 10; };

std::vector<int> ints{1, 2, 3, 4, 5};
auto even = [](int i){ return 0 == i % 2; };
auto square = [](int i){ return i * i; }; 

for (int i : ints | std::view::filter(even) | std::view::transform(square)) {
    std::cout << i << ' ';
}


auto lambda = [/*captures*/](int param1){ return param1 * 10; };

std::vector<int> ints{1, 2, 3, 4, 5};
auto even = [](int i){ return 0 == i % 2; };
auto square = [](int i){ return i * i; }; 

for (int i : ints | std::view::filter(even) | std::view::transform(square)) {
    std::cout << i << ' ';
}

