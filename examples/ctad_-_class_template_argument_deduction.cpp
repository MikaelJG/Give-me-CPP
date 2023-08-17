
template<typename VT, typename ... Params>
auto get_data(const VT &v1, const Params & ... params)
{
    return std::array{v1, params...}; // auto deduced size/type
}

std::vector vec{1,2,3}; // now possible! 
and now we can simplify the template arguments

/include <array>

template<typename ... Params>
auto get_data(const Params & ... params)
{
    return std::array{params...};
}

