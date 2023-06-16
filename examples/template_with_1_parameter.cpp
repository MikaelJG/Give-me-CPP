
#include <array>

template<typename> VT>
std::array<VT, 1> get_data(const VT &v1)
{
    std::array<VT, 1> data;
    data[0] = v1;
    return data;
}

