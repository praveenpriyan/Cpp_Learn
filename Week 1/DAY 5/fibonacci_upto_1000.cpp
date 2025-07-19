#include<iostream>

using namespace std;

int main()
{
    int num1 =0;
    int num2 = 1;
    int result = 0;
    while(result<1000)
    {
        cout<<result<<endl;
        result = num1 + num2 ;
        num1 = num2;
        num2 =result;
    }
}
