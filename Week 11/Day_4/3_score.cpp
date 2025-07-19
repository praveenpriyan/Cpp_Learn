#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	for(int i=0;i<test;i++){
    	int a,b,c,d=0;
    	cin>>a>>b>>c>>d;
    	
    	if(c>=a && d>=b){
    	    cout<<"Possible"<<endl;
    	}else{
    	    cout<<"Impossible"<<endl;
    	}
	}
}