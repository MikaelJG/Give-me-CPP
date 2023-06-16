
struct Chapters {
    bool IsToPrint = true;
};

struct Chapters {
    bool IsToPrint;

    Chapters() : IsToPrint(true) {} // with default constructor
};

int main() {
    Chapters c1;
    Chapters c2 = {false};

    // c1.IsToPrint will be true
    // c2.IsToPrint will be false

    return 0;
}

