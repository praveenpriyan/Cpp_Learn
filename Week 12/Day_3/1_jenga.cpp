#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
	    int people,tiles;
	    cin>>people>>tiles;
	    
	    if(tiles>=people&&tiles%people==0){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}

}