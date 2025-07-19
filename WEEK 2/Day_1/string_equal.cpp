#include<iostream>
#include<string>

using namespace std;

int main()
{
    string string1, string2;
    cout<<"Enter string 1: ";
    getline(cin,string1);
    cout<<"Enter string 2: ";
    getline(cin,string2);
    if(string1 == string2)
    {
        cout<<"The given strings are equal";
    }
    else{
        cout<<"The given strings are NOT equal";
    }
}