#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    
    for(int i=0;i<test;i++){
        int a,b;
        cin>>a>>b;
        
        double percentage=(static_cast<double>(b)/a)*100;
        
        if(percentage>=50){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}