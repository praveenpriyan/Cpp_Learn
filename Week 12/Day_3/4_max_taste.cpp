#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
	    int A,B,C,D; cin>>A>>B>>C>>D;
	    
	    int first=(A>B)?A:B;
	    int second=(C>D)?C:D;
	    
	    int total=first+second;
	    cout<<total<<endl;
	}
}