#include<iostream>
#include<string>

using namespace std;

string togglecase(const string& str)
{
    string toggledStr = str;
    for(char& c : toggledStr)
    {
        if(islower(c))
        {
            c = toupper(c);
        }
        else if(isupper(c))
        {
            c = tolower(c);
        }
    }
    return toggledStr;
}

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    string toggledString = togglecase(str);
    cout<<"Toggled String is: "<<toggledString;
}