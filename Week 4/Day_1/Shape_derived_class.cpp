#include<iostream>
using namespace std;

class Shape
{
protected:
    double area;
public:
    Shape():area(0){}
    
    virtual void computeArea(){}

    double getArea() const {
        return area;
    }
};

class Rectangle : public Shape
{
private:
    double width;
    double height;
public:
    Rectangle(double w, double h):width(w),height(h){}

    void computeArea()override{
        area = width*height;
    }
};

int main()
{
    Rectangle rect(5.0,3.0);

    rect.computeArea();
    cout << "The area of the rectangle is: " << rect.getArea() << endl;
}