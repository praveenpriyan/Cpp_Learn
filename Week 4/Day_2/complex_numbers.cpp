/*C++ program to demonstrate operator overloading (Compile-Time Polymorphism). 
Create a class with the name 'Complex'. 
Include an overloaded + operator function to display an output in the format(real numberl+i(imaginary number))*/

#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    friend ostream& operator<<(ostream& os, const Complex& c);
};

ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real << " + i" << c.imag;
    return os;
}

int main() {
    // Create two Complex objects
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    // Add the two Complex objects using the overloaded + operator
    Complex c3 = c1 + c2;

    // Display the result
    cout << "The sum of " << c1 << " and " << c2 << " is " << c3 << endl;

    return 0;
}
