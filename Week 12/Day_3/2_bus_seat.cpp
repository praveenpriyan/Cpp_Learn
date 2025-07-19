#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	for(int i=0;i<test;i++){
	    int seat_no; cin>>seat_no;
	    if(seat_no<=15){
	        if(seat_no<=10){
	            cout<<"LOWER DOUBLE"<<endl;
	        }else{
	            cout<<"LOWER SINGLE"<<endl;
	        }
	    }else{
	        if(seat_no<=25){
	            cout<<"UPPER DOUBLE"<<endl;
	        }else{
	            cout<<"UPPER SINGLE"<<endl;
	        }
	    }
	}
}