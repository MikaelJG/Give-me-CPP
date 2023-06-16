
#include <array>

template<typename> VT> // takes 1 parameter
std::array<VT, 1> get_data(const VT &v1)
{
    std::array<VT, 1> data;
    data[0] = v1;
    return data;
}
template<typename> VT> // takes 2 parameters
std::array<VT, 2> get_data(const VT &v1, const VT &v2)
{
    std::array<VT, 2> data;
    data[0] = v1; data[1] = v2;
    return data;
}

template<typename> VT> // takes 3 parameters
std::array<VT, 3> get_data(const VT &v1, const VT &v2, const VT &v3)
{
    std::array<VT, 3> data;
    data[0] = v1; data[1] = v2; data[2] = v3;
    return data;
}

// if only there was a way to initialize the array values in one step...

