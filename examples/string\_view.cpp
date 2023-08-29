
#include <string_view>
std::string_view sv{some_string_like_thing}; // no copy

These are passed-by-value on purpose.
String_view are cheap to copy. It is recommended to pass them by value.

