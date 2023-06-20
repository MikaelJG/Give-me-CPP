

// static const data known at compile time. 
static const std::vector<int> angles{-90,-45,0,45,90};


\subsubsection{Useful Constexpr}


// Moving static const to static constexpr.
static constexpr std::array<int, 5> angles{-90,45,0,45,90};

Here static constexpr makes sure the object
is not reinitialized each time the function is encountered.

With static (see object lifetimes), the variable lasts for the lifetime of the program.
It will be initialized only once. 

