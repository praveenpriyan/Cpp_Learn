#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	for(int i=0;i<test;i++){
	
    	int a,b,c;
    	cin>>a>>b>>c;
    	
    	float avg=(float)(a+b)/2;
    	
    	//cout<<"Average: "<<avg<<endl;
    	
    	if(double(avg)>c){
    	    cout<<"Yes"<<endl;
    	}else{
    	    cout<<"No"<<endl;
    	}
	}
}