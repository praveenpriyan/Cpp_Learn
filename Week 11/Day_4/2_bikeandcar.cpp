#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	for(int i=0;i<test;i++){
	    int car,bike=0;
	    cin>>bike>>car;
	    if(bike<car){
	        cout<<"BIKE"<<endl;
	    }else if(bike==car){
	        cout<<"SAME"<<endl;
	    }else{
	        cout<<"CAR"<<endl;
	    }
	}

}