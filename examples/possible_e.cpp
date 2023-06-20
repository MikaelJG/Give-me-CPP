
const std::string value = get_string_value();

// What is the return type of get_string_value()? 

If its std::string_view or const char *,
we'll get costly conversion on all compilers with no diagnostic. 


\subsection{No possible expensive conversion}


// avoids conversion
const auto value = get_string_value();

