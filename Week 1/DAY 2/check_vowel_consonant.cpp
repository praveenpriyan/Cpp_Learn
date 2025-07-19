#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;

    if(isalpha(ch))
    {
        if(tolower(ch) == 'a'|| tolower(ch) == 'e'|| tolower(ch)=='i'|| tolower(ch) == 'o'|| 
            tolower(ch) == 'u')
        {
            cout<<"The given character is Vowel: "<<ch;
        }else{
            cout<<"The given character is Consonanat: "<< ch;
        }
    }else if(isdigit(ch))
    {
        cout<<"The given character is digit: "<<ch;
    }
}