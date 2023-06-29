
Option 1: Change the loop variable type to `size_t`:
for (size_t i = 0; i < container.size(); ++i) {
    // ...
}

Option 2: Cast the container's size to `int`:
for (int i = 0; i < static_cast<int>(container.size()); ++i) {
    // ...
}

for (int i = 0; i < container.size(); ++i) {
    // oops mismatched types
}

