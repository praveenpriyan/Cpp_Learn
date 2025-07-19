/*C++ program to calculate the area of a rectangle. 
Use default parameters to allow the function to 
calculate the area of a square if only one side is provided.*/
#include<iostream>
using namespace std;

int calculateArea(int length, int width = 0)
{
    if(width == 0)
    {
        width=length;
    }
    return length*width;
}
int main()
{
    int length,width;
    int choice;
    cout<<"1.SQUARE\n2.RECTANGLE"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    
    if(choice == 1)
    {
        cout<<"Enter the side of the sqaure: ";
        cin>>length;
        cout<<"The area of the square is: "<<calculateArea(length)<<endl;
    }
    else if(choice==2)
    {
        cout<<"Enter the length of the rectangle: ";
        cin>>length;
        cout<<"Enter the width of the rectangle: ";
        cin>>width;
        cout<<"The area of the rectangle is: "<<calculateArea(length,width)<<endl;
    }
    else{
        cout<<"Invalid!!!Please choose correct choice";
        return 1;
    }
    return 0;
}