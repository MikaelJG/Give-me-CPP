
// Moving static const to static constexpr.
static constexpr std::array<int, 5> angles{-90,45,0,45,90};

Here static constexpr makes sure the object
is not reinitialized each time the function is encountered.

With static (see object lifetimes), the variable lasts for the lifetime of the program.
It will be initialized only once. 


\subsubsection{Differences}


    the size of the array is now known at compile time
    We've removed dynamic allocations
    We no longer pay the cost of accessing a static

    " when you see a const, always ask yourself: "is this value known at compile time? 
    If it is, what would it take to make the value constexpr?" 

