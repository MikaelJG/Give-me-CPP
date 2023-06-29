
class Musician {
private:
    int instruments;

public:
    // Getter function
    int getMyVariable() const {
        return myVariable;
    }

    // Setter function
    void setMyVariable(int newValue) {
        myVariable = newValue;
    }
};

int main() {
    MyClass obj;
    obj.setMyVariable(42);

    int value = obj.getMyVariable();
    std::cout << "MyVariable value: " << value << std::endl;

    return 0;
}

