
const auto data = [](){ // no parameters
    std::vector,int. result;
    // fill result with things. 
    return result;
}(); // immediately invoked

Because of RVO, using a lambda will not add overhead and may increase performance.
What is RVO?

Yet, you don't want to make class members constl.
It can break things silently. 

