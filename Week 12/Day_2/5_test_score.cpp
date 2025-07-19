#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	for(int i=0;i<test;i++){
	    int problems,marks,chef_score;
	    cin>>problems>>marks>>chef_score;
	    
	    if (chef_score % marks == 0 && chef_score / marks <= problems) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
	}
}