#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
	    int num;cin>>num;
	    int reverse=0;
	    while(num>0){
    	    reverse=(reverse*10)+num%10;
    	    num=num/10;
	    }
	    cout<<rev<<endl;
	}

}