
If only there was some easier way of formatting our output...


\subsection{Text Formatting}

A subset of the excellent {fmt} library, allowing for formatting of strings with positional,
named and python/printf style formatting options.


#include <format>
std::string s = fmt::format("I'd rathe be {1} than {0}.", "right", "happy");
// "I'd rather be happy than right."

Standard C++20

