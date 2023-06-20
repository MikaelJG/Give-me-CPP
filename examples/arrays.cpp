
#include <array> // c++ 11
    std::array<char, 128> second = {'H', 'e', 'l'} // from library
                            // fixed size of 128
                            // has .begin(), .end(), .at(), .size() 

    sint arr[] = {1, 2, 3}; // c-style array 
                            // size determined by initializer's list
                            // fixed at compile-time 


std::array<Type, Size> data

#include <numeric>
#include <array>

template<typename Value_Type>
std::array<Value_Type, 3> get_data(const Value_Type &v1, const Value_type &v2,
                                   const Value_type &v3)
{
    std::array<Value_Type 3> data;
    data[0] = v1;
    data[1] = v2;
    data[2] = v3;
    return data;
}

// no dynamic allocation, 
// win-win scenario with knowing the size of the data struture at compile time.

template<typename> VT> // takes 3 parameters
std::array<VT, 3> get_data(const VT &v1, const VT &v2, const VT &v3)
{
    return {v1, v2, v3};
}

template<typename> VT> // takes 4 parameters
std::array<VT, 4> get_data(const VT &v1, const VT &v2, const VT &v3, const VT &v4))
{
    return {v1, v2, v3, v4};
}

... 
// If only there was a way to avoid all this code duplication !!!

