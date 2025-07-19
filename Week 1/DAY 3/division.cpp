#include<iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    if(num1%num2 == 0)
    {
        cout<<"The given number "<<num1<<" is divisible by "<<num2<<endl;
    }
    else{
        cout<<"The given number "<<num1<<" is not divisible by "<<num2<<endl;
    }

}