#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int x,y,temp;
    cout<<"Enter X Value: ";
    cin>>x;
    cout<<"Enter Y value: ";
    cin>>y;

    cout<<"Before Interchange:"<<"X = "<<x<<",Y = "<<y<<endl;

    temp=x;
    x=y;
    y=temp;

    cout<<"After Interchange:"<<"X = "<<x<<",Y = "<<y<<endl;
}