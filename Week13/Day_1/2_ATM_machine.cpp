#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test; cin>>test;
	
	for(int i=0;i<test;i++){
	    int num,total;
	    cin>>num>>total;
	    int arr[num]={0};
	    int count=1;
	    for(int i=0;i<num;i++){
	        cin>>arr[i];
	        if(arr[i]<=total){
	            total-=arr[i];
	            count=1;
	            cout<<count;
	        }else{
	            count=0;
	            cout<<count;
	        }
	    }
	    cout<<endl;
	}
}