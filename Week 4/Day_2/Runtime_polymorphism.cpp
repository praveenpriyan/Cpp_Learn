/*C++ program that demonstrates run-time polymorphism using virtual functions - 
Create a base class called Shape with a virtual function calculateArea(). 
Then create derived classes Circle and Rectangle that override this function to 
calculate their respective areas.*/

#include<iostream>
#include<cmath>
using namespace std;

#define M_PI 3.14159265358979323846

class Shape{
public:
    virtual void calculateArea() const {
        cout << "Calculating area of shape." << endl;
    }
    // Virtual destructor
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Override the calculateArea function
    void calculateArea() const override {
        double area = M_PI * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    // Constructor
    Rectangle(double w, double h) : width(w), height(h) {}

    // Override the calculateArea function
    void calculateArea() const override {
        double area = width * height;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    // Create pointers to Shape objects
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);

    // Call the calculateArea function for each shape
    shape1->calculateArea();
    shape2->calculateArea();

    // Clean up
    delete shape1;
    delete shape2;

    return 0;
}