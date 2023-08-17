
#include <array>

// require at least one parameter and it sets the type
template<typename VT, typename ... Params>
std::array<VT, sizeof...(Params)+1> get_data(const VT &v1, const Params& ...params)
{
    return {v1, params...};
}


template<typename VT, Typename ... P> // variadic template
std::array<VT, sizeof...(P)> get_data(const P & ... params) // param expansion
{
    return {params...}; // pack expansion
}

template<typename> VT>
std::array<VT, 3> get_data(const VT &v1, const VT &v2, const VT &v3) // 3 params
{
    std::array<VT, 3> data;
    data[0] = v1; data[1] = v2; data[2] = v3;
    return data;
}

template<typename> VT>
std::array<VT, 2> get_data(const VT &v1, const VT &v2) // 2 params
{
    std::array<VT, 2> data;
    data[0] = v1; data[1] = v2;
    return data;
}

template<typename> VT>
std::array<VT, 1> get_data(const VT &v1) // 1 params
{
    std::array<VT, 1> data;
    data[0] = v1;
    return data;
}

// This bothers.
template<typename Value_Type>
struct Data {
    Data(const std::size_t size)
      : data(new Value_Type[size])
    {
    }

    ~Data() { delete [] data; }

    Value_Type *data;
};

