#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
	    int police,thief;
	    cin>>police>>thief;
	    
	    if(thief>police){
	        cout<<thief-police<<endl;
	    }else{
	        cout<<police-thief<<endl;
	    }
	}

}