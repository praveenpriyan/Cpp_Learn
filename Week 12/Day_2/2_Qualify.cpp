#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	for(int i=0;i<test;i++){
	    int score,easy,hard;
	    cin>>score>>easy>>hard;
	    
	    int total=(easy*1)+(hard*2);
	    if(total>=score){
	        cout<<"Qualify"<<endl;
	    }else{
	        cout<<"NotQualify"<<endl;
	    }
	}

}