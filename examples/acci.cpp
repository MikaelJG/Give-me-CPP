
for (const base value : container_of_derived) {
    // accidental silent slicing
}


// no problem
for (const auto &value : container) {
    // no possible accidental conversion
}

Using pointers or references ensures that the derived objects retain their specific attributes and behavior.

const auto & for non-mutating loops
auto & for mutating loops
auto && 
// only when you have to with weird types like std::vector<bool>,
// or if moving elements out of the container

// Understand how this code is working
// Accidental copy?

std::map<std::string, int> get_map();

using element_type = std::pair<std::string, int>;

for (const element_type & : get_map())
{}


for (const base value : container_of_derived) {
    // accidental silent slicing
}


// no problem
for (const auto &value : container) {
    // no possible accidental conversion
}

Using pointers or references ensures that the derived objects retain their specific attributes and behavior.

const auto & for non-mutating loops
auto & for mutating loops
auto && 
// only when you have to with weird types like std::vector<bool>,
// or if moving elements out of the container

// Understand how this code is working
// Accidental copy?

std::map<std::string, int> get_map();

using element_type = std::pair<std::string, int>;

for (const element_type & : get_map())
{}

