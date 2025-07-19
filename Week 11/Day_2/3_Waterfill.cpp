#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	for(int i=0;i<test;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    if((a==1 && b==1 && c==0)||(a==0&&b==1&&c==1)||(a==1&&b==0&&c==1)||(a==1&&b==1&&c==1)){
	        cout<<"Not now"<<endl;
	    }else{
	        cout<<"Water filling time"<<endl;
	    }
	}
}
