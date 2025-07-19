#include<iostream>

using namespace std;

int factorial(int n)
{
    if(n==0||n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int result=factorial(num);
    cout<<"The factorial of a given number is: "<<result<<endl;
}