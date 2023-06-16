
#include <array>

auto get_data(const auto & ... params)
{
    return std::array{params...};
}

// The only problem now is that this code requires the types to be copyable.
// If only there was a way to forward arguments and avoid copies......

