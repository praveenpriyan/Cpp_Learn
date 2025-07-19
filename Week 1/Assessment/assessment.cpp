#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    int product;

    for(int i=1;i<=10;i++)
    {
        product =i*num;
        for(int j=1;j<=product;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}