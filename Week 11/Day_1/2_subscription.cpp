#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    
    for(int i=1;i<=test;i++){
        int N=0;
        int X=0;
        cin>>N>>X;
        int count=1;
        if(N%6==0){
            count=N/6;
        }else{
            count=(N/6)+1;
        }
        int total=X*count;
        cout<<total<<endl;
    }
}
