#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test; cin>>test;
    for(int i=0;i<test;i++){
        int total,capacity;
        cin>>total>>capacity;
        
        int one_person=2*capacity;
        int count=0;
        
        if(total<one_person){
            count=0;
        }else{
            count=total/one_person;
        }
        cout<<count<<endl;
    }
}