
set<>
vector<>
for_each<>
any_of<>
etc.

A generic set of composable tools

// now, here we are

#include <numeric>
#include <vector>

template<typename Value_Type>
std::vector<Value_Type> get_data(const Value_Type &v1, const Value_type &v2,
                                 const Value_type &v3)
{
    std::vector<Value_Type> data;
    data.push_back(v1);
    data.push_back(v2);
    data.push_back(v3);
    return data;
}

template<typename T>
T sum_data(const std::vector<T> &d) {
    return std::accumulate(d.begin(), d.end(), T());
}

int main() {
    return sum)data(get_data(1,2,3));
}

// But we know the amount of data at compile-time. 
// If only there was some fixed-size container available!


