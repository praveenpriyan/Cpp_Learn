/*C++ program to print numbers from 1-10 without using loop(use goto statement)*/
#include<iostream>

using namespace std;

int main()
{
    int i = 1;

increment:
    cout<<i<<endl;
    i = i + 1;

    if (i<=10){
        goto increment;
    }

}