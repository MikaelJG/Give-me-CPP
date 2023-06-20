
By value
auto lambda = [param](int param1){ return param1 * 10; };

A copy of the variable is made at the lambda's creation time.
Then, it uses that copy within its body. 


Reference Capture
auto lambda = [&param](int param1){ return param1 * 10; };

The lambda function refers to the original variable in the surrounding scope directly,
without making a copy. 



int x = 42;
double y = 3.14;

auto lambda = [x, &y](int param1){ return x * param1 + y; };

