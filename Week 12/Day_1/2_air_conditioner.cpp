#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int A,B,C;
        cin>>A>>B>>C;
        
        if(A<=B&&C<=B){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}
