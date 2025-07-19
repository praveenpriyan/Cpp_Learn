#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	for(int i=0;i<test;i++){
	    int num,age_to_vote;
	    cin>>num>>age_to_vote;
	    int arr[num]={0};
	    int count=0;
	    for(int j=0;j<num;j++){
	        cin>>arr[j];
	        if(arr[j]>=age_to_vote){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}

}