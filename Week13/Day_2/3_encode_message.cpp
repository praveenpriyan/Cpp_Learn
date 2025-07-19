#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string original="abcdefghijklmnopqrstuvwxyz";
    int original_len=original.length();
    string reversed="";
    for(int i=original_len-1;i>=0;i--){
        reversed+=original[i];
    }
    int test; cin>>test;
    for(int i=0;i<test;i++){
        int str_len; 
        cin>>str_len;
        string str; 
        cin>>str;
        if(str_len%2==0){
            for(int i=0;i<str_len;i+=2){
                swap(str[i],str[i+1]);
            }
        }else{
            for(int i=0;i<str_len-1;i+=2){
                swap(str[i],str[i+1]);
            }
        }
        for (int i = 0; i < str_len; i++) {
            str[i] = reversed[str[i] - 'a'];
        }
        cout<<str<<endl;
    }
}