#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    
    for(int i=0;i<test;i++){
        int a,b;
        cin>>a>>b;
        int count=0;
        
        int total=a*b;
        if(total<=4){
            count=1;
        }else if(total>=4){
            if(total%4==0)
                count=(total/4);
            else
                count=(total/4)+1;
        }
        
        cout<<count<<endl;
    }
}