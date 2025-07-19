/*C++ Program to find the maximum of 2 numbers using Macros*/

#include<iostream>

#define MAX(a,b) ((a)>(b) ? (a):(b))

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter Value for 'a': ";
    cin>>a;
    cout<<"Enter Value for 'b': ";
    cin>>b;

    int maxNum=MAX(a,b);

    cout<<"The Maximum Number of "<<a<<" and "<<b<<" is "<<maxNum;
}