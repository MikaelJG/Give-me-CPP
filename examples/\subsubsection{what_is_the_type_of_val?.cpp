
const int *get();

int main() {
    const auto val = get();
}


\subsubsection{What is the type of val?}


const int &get();

int main() {
    const auto val = get();
}


const int &get();

int main() {
    const auto val = get();
}


\textbf{According to GPT}

The function get() returns a const int\& (a reference to a constant integer), and the auto keyword deduces the type of val as the same as the type of the expression on the right-hand side of the assignment. Since get() returns a const int\&, the type of val is also const int\&. The const qualifier in front of auto ensures that the type deduced for val is also a const reference.

\subsubsection{What is the type of val?}


Const int *get();

int main() {
    const auto *val = get();
}


Const int *get();

int main() {
    const auto *val = get();
}


According to GPT

The function get() returns a const int* (a pointer to a constant integer), and the auto keyword deduces the type of val as the same as the type of the expression on the right-hand side of the assignment. Since get() returns a const int*, the type of val is also const int*.

Note that in this case, the const qualifier applies to the integer pointed to by val, not to the pointer val itself. Therefore, val is a non-constant pointer to a constant integer. If you wanted a constant pointer to a constant integer, you would need to declare val as const int * const val = get();

\subsubsection{What is the type of val?}


const int &get();

int main() {
    const auto &val = get();
}


const int &get();

int main() {
    const auto &val = get();
}

\subsubsection{What is the type of val?}


const int *get();

int main() {
    const auto &val = get();
}


const int *get();

int main() {
    const auto &val = get();
}

\subsubsection{What is the type of val?}


const int &get();

int main() {
    const auto &&val = get();
}



const int &get();

int main() {
    const auto &&val = get();
}


\subsection{Auto (avoid potential expensive conversions)}


// Same as ranged-for loops.
// auto requires initialization, same as const. 

