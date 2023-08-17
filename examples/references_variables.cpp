
int &sonny = songqiao; // Sonny, a reference to songqiao;

\\ Changes to the reference happens to the original.
\\ Aliases cannot be changed to alias something else.

  int soda = 99;
  int &pop = soda;
  pop++; // soda and pop equal at 100

Using a reference (&) instead of making a copy of the elements is more efficient,
especially when dealing with large objects or containers. 

By using a reference, the loop avoids creating a new copy of each element
, reducing unnecessary memory usage and improving performance.

struct ComplexStruct {
    int value1;
    int value2;
};

void modifyStruct(ComplexStruct& ref) {
    ref.value1 = 100;
    ref.value2 = 200;
}

int main() {
    int x = 10;
    int& ref1 = x;              // Reference variable ref1 refers to x
    ref1 = 20;                  // Modifying ref1 will also modify x

    ComplexStruct obj;
    obj.value1 = 50;
    obj.value2 = 60;
    ComplexStruct& ref2 = obj;  // Reference variable ref2 refers to obj

    modifyStruct(ref2);         // Modifying ref2 will also modify obj
    return 0;
}

