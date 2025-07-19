/*C++ program to declare a double pointer, 
assign it to a regular pointer, and then modify the value it points to.*/

#include<iostream>
using namespace std;

int main()
{
    int* ptr =new int(10);
    cout<<"Initial Value: "<<*ptr<<endl;

    int** doublePtr = &ptr;
    **doublePtr = 20;

    cout<<"Modified Value through double pointer: "<<*ptr<<endl;

    delete ptr;

    return 0;
}
