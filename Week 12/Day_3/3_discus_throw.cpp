#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	for(int i=0;i<test;i++){
	    int A,B,C;
	    cin>>A>>B>>C;
	    
	    int max=A;
	    if(B>max){
	        max=B;
	    }
	    if(C>max){
	        max=C;
	    }
	    cout<<max<<endl;
	}
}