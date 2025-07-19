#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    
    for(int i=0;i<test;i++){
        int X;
        cin>>X;
        if(X<100){
            cout<<X<<endl;
        }else if(X<=1000){
            cout<<X-25<<endl;
        }else if(X<=5000){
            cout<<X-100<<endl;
        }else{
            cout<<X-500<<endl;
        }
    }
}