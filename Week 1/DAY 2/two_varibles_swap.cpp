#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int x,y;
    cout<<"Enter X Value: ";
    cin>>x;
    cout<<"Enter Y value: ";
    cin>>y;

    cout<<"Before Interchange:"<<"X = "<<x<<",Y = "<<y<<endl;

    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"After Interchange:"<<"X = "<<x<<",Y = "<<y<<endl;

}