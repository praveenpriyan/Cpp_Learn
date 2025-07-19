#include<iostream>
using namespace std;

//Global Value Declaration
int value = 10;

class Rectangle
{
private:
    int height;
    int width;
public:
    //Function Declaration
    void setDimensions(int,int);
    int getArea();
    void displayValues();
};

// Function definition outside the class
void Rectangle::setDimensions(int w,int h)
{
    width=w;
    height=h;
}

// Function definition outside the class
int Rectangle::getArea()
{
    return width*height;
}

// Function to display local and global values
void Rectangle::displayValues()
{
    //Local variable declaration
    int value = 20;
    cout<<"Local Variable Value is: "<<value<<endl;
    // Accessing the global variable using scope resolution operator
    cout<<"Global variable Value is: "<<::value<<endl;
}

int main()
{
    Rectangle rect;
    rect.setDimensions(12,5);
    cout << "Area of the rectangle: " << rect.getArea() <<endl;
    rect.displayValues();

    return 0;
}