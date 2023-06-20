
for (const base value : container_of_derived) {
    // accidental silent slicing
}


// no problem
for (const auto &value : container) {
    // no possible accidental conversion
}

Using pointers or references ensures that 
the derived objects retain their specific attributes and behavior.

const auto & for non-mutating loops
auto & for mutating loops
auto && 
// only when you have to with weird types like std::vector<bool>,
// or if moving elements out of the container


