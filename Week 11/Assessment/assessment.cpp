#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	int num;
	
	string array[]={"normal","huge","small"};

	for(int i=0;i<test;i++){
	    cin>>num;
        if(num%3==0){
            cout<<array[0]<<endl;
        }else if(num%3==1){
            cout<<array[1]<<endl;
        }else if(num%3==2){
            cout<<array[2]<<endl;
        }
	}
}
