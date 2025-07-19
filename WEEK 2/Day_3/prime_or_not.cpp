#include<iostream>
using namespace std;

bool prime(int number)
{
    int i;
    for (int i = 2; i <= number / 2; i++)
        if (number % i == 0)
            return false;
 
    return true;
}

int main()
{
    int num;
    cout<<"Enter a Number:";
    cin>>num;

    int result = prime(num);
    if(result == true)
    {
        cout<<"The given number is Prime: "<<num<<endl;
    }
    else{
        cout<<"The given number is NOT Prime: "<<num<<endl;
    }
}