#include<iostream>
#include<math.h>

#define PI 3.14

using namespace std;

int main()
{
    int shapes;
    cout<<"Shapes:\n1.Circle \n2.Rectangle \n3.Square"<<endl;
    cout<<"Enter any of the shape number(1-3): ";
    cin>>shapes;

    switch(shapes)
    {
        case 1:
            double radius, CircleArea;
            cout<<"Area of Circle"<<endl;
            cout<<"Enter radius of circle: ";
            cin>>radius;

            CircleArea = PI * radius * radius;

            cout<<"Area of Circle is: "<<CircleArea;
            break;

        case 2:
            double length,breadth, RectangleArea;
            cout<<"Area of Rectangle"<<endl;
            cout<<"Enter length of Rectangle: ";
            cin>>length;
            cout<<"Enter breadth of Rectangle: ";
            cin>>breadth;

            RectangleArea = length * breadth;

            cout<<"Area of Rectangle is: "<<RectangleArea;
            break;
        
        case 3:

            double side, SquareArea;
            cout<<"Area of Square"<<endl;
            cout<<"Enter Side-length of Square: ";
            cin>>side;

            SquareArea = side * side;

            cout<<"Area of Rectangle is: "<<SquareArea;
            break;

        default:
            cout<<"Please enter a valid number";
    }
    return 0;
}