#include<iostream>
using namespace std;

int firstUniqChar(string s){
    int l=s.length();
    for(int i=0;i<l;i++){
        bool found=true;
        for(int j=0;j<l;j++){
            if(i!=j && s[i]==s[j]){
                found=false;
                break;
            }
        }
        if(found){
            return i;
        }
    }
}

int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    int res=firstUniqChar(str);

    cout<<"The Index of the first Non-Repeating character: "<<res<<endl;

    cout<<"The Value of the string: "<<str[res]<<endl;
}