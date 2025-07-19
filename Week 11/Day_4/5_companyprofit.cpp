#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
	    int a,b,c,d=0;
	    cin>>a>>b>>c>>d;
	    int others=0;
	    
	    int max=a;
	    if(b>max){
	        max=b;
	    }
	    if(c>max){
	        max=c;
	    }
	    if(d>max){
	        max=d;
	    }
	   //cout<<"Max: "<<max<<endl;
	    if(max==a){
	        others=b+c+d;
	    }
	    if(max==b){
	        others=a+c+d;
	    }
	    if(max==c){
	        others=a+b+d;
	    }
	    if(max==d){
	        others=a+b+c;
	    }
	   //cout<<"Others: "<<others<<endl;
	    if(max>others){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	    
	}
}