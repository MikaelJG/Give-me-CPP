
auto lambda = [/*captures*/](auto ... params){
    return std::vector<int>{params...};
}

standard c++14

