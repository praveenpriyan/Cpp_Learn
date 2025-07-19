#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    // Parameterized constructor
    MyClass(int val) : value(val) {
        cout << "Constructor called. Value initialized to " << value << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called. Value was " << value << endl;
    }

    // Method to get the value
    int getValue() const {
        return value;
    }
};

int main() {
    // Creating an object with a parameterized constructor
    MyClass obj(42);

    // Accessing the value using the getValue method
    cout << "The value is: " << obj.getValue() << endl;

    // The destructor will be called automatically when obj goes out of scope
    return 0;
}