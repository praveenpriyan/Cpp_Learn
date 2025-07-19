#include<iostream>

using namespace std;

int fib(int n)
{
    int num1 =0;
    if(n == 0)
    {
        cout<<"The Given Number is "<<n;
        return n;
    }
    int num2 = 1;
    for(int i=2;i<=n;i++)
    {
        int result = num1 + num2 ;
        num1 = num2;
        num2 =result;
        cout<<result<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    fib(n);
}
