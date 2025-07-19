#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	for(int i=0;i<test;i++){
	    int num;
	    cin>>num;
	    int arr[num];
	    int count=0;
	    for(int i=0;i<num;i++){
	        cin>>arr[i];
	        if(arr[i]>=1000){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}

}