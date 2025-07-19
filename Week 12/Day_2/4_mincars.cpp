#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
	    int num;
	    cin>>num;
	    int count=0;
	    if(num<=4){
	        count=1;
	    }else if(num>4&&num%4==0){
	        count=num/4;
	    }else{
	        count=(num/4)+1;
	    }
	    cout<<count<<endl;
	}
}