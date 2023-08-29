
The object moves out of scope.
The object is explicitly deleted.
When the program ends.

void some_func() {
    std::string s{"Hello"};     // allocate a string
}                               // automatically frees it
                                // when scope exits

