// Input: str = “forgeeksskeegfor” 
// Output: “geeksskeeg”

#include<iostream>
using namespace std;

string palindrome(string str,int size){
    string res;
    for(int i=size-1;i>=0;i--){
        res += str[i];
    }
    return res;
}

int main(){
    string str;
    cout<<"Enter the String: ";
    cin>>str;

    int size=str.length();
    string reversed=palindrome(str,size);
    cout<<"normal String: "<<str<<endl;
    cout<<"Reversed String: "<<reversed<<endl;
    if(str==reversed)
        cout<<"The given String is Palindrome";
    else
        cout<<"The given string is not palindrome";
}
