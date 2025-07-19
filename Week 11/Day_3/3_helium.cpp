#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	for(int i=0;i<test;i++){
	    int A;   //unit of power
	    int B;   //Years
	    int X;   //unit of power in helium
	    int Y;   //Years in helium
	    cin>>A>>B>>X>>Y;
	    
	    int power=A*B;
	    int helium_power=X*Y;
	    
	    if(helium_power>=power){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
}