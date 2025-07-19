#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	for(int i=0;i<test;i++){
	    int pulp;
	    cin>>pulp;
	    int notebooks=0;
	    
	    int pages=pulp*1000;
	    
	    notebooks=pages/100;
	    
	    cout<<notebooks<<endl;
	}

}