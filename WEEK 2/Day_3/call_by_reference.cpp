#include<iostream>
using namespace std;

int increment(int &num)
{
    num = num+1;
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    increment(num);
    cout<<"Incremented number: "<<num<<endl;
}
