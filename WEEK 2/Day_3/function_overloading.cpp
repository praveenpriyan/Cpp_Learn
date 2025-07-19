#include<iostream>
using namespace std;

int add(int a, int b)
{
    cout<<"Calling Function add(a,b)"<<endl;
    return a+b;
}

int add(int a, int b, int c)
{
    cout<<"Calling Function add(a,b,c)"<<endl;
    return a+b+c;
}

int main()
{
    int a,b,c;
    cout<<"Enter a Number 1: ";
    cin>>a;
    cout<<"Enter a Number 2: ";
    cin>>b;
    cout<<"Enter a Number 3: ";
    cin>>c;

    int result1=add(a,b);
    cout << "The sum of " << a << " and " << b << " is: " << result1 << endl;
    int result2=add(a,b,c);
    cout << "The sum of " << a << " and " << b <<  " and " << c << " is: " << result2 << endl;

    return 0;
}