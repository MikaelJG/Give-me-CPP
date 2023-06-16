
#include <array>

template<typename> VT>
std::array<VT, 2> get_data(const VT &v1, const VT &v2)
{
    std::array<VT, 2> data;
    data[0] = v1; data[1] = v2;
    return data;
}

// But I would like a version of this that takes only 1 parameter

