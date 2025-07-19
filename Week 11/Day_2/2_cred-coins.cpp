#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    
    for(int i=0;i<test;i++){
        int a,b;
        cin>>a>>b;
        
        int bag_count=0;
        int coins=a*b;
        if(coins==100){
            bag_count=1;
        }else if(coins>100){
            bag_count=coins/100;
        }else{
            bag_count=0;
        }
        cout<<bag_count<<endl;
    }
}