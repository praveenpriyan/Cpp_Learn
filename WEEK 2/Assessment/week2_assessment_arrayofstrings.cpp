//Program to create an array of strings and use pointers to navigate through the array and print each string.

#include<iostream>
#include<string>

using namespace std;

int main()
{
    const char* array[4] = {"abc","def","ghi","jkl"};
    const char **ptr = array;
    for(int i=0;i<4;i++)
    {
        cout<<*(ptr+i)<<endl;
    }
}
