#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    
    for(int i=0;i<test;i++){
        int A,B;
        cin>>A>>B;
        int a_valuation=(A/10)*100;
        int b_valuation=(B/20)*100;
        if(a_valuation==b_valuation){
            cout<<"ANY"<<endl;
        }else if(a_valuation>b_valuation){
            cout<<"FIRST"<<endl;
        }else{
            cout<<"SECOND"<<endl;
        }
    }
}