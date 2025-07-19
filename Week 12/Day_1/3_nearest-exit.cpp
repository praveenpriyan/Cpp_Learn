#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	int total=100/2;
	
	for(int i=0;i<test;i++){
	    int num;
	    cin>>num;
	    if(num<=total){
	        cout<<"LEFT"<<endl;
	    }else{
	        cout<<"RIGHT"<<endl;
	    }
	}

}
