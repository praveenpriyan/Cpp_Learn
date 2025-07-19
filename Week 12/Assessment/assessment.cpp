#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	for(int i=0;i<test;i++){
	    int alice;
	    int bob;
	    int charlie;
	    int subscription;
	    
	    cin>>alice>>bob>>charlie>>subscription;
	    
	    if((alice+bob)>=subscription||(alice+charlie)>=subscription||(bob+charlie)>=subscription)
	    {
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}

}