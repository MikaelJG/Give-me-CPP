
for (const base value : container_of_derived) {
    // accidental silent slicing
}

If container_of_derived holds objects of a derived class. 
Base is the base class.
The loop is iterating over the container and assigning each
derived object to a base object (value) due to object slicing.

Object slicing occurs because the base object can only store
the base class's attributes and behavior. Additional defined 
class attributes will be lost during the assignment or copy.

To avoid accidental slicing, you use pointers or references.

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

