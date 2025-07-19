#include<iostream>

using namespace std;

int main()
{
    int fact;
    cout<<"Enter Number: ";
    cin>>fact;
    int total = 1;
    for(int i=fact;i>0;i--)
    {
        total = total*(i);
    }
    cout<<"Factorial of "<<fact<<" is "<<total;

}
