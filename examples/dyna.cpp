
delete new S *object_4("a","t");


\subsection{Deterministic Object Lifetime and Destruction}

Constructor / Destruct pairs (RAII) combined with scoped values give us determinism that removes the need for things like 'finally'


#include <string>

void some_func() {
    std::string s{"Hello"}; // allocate a string
} // automatically free it when scope exits

Standard: c++ 98


delete new S *object_4("a","t");

