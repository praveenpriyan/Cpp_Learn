#include <bits/stdc++.h>
using namespace std;

int main() {
	int total, test;
    int sell=50;
    int N;
    int sugar,salt,rent;
    int final;
    cin>>test;
    
    for(int i=0;i<test;i++){
        cin>>N;
        total=sell*N;
        
        sugar=(total*0.2);
        salt=(total*0.2);
        rent=(total*0.3);
        
        final=total-(sugar+salt+rent);
        
        
        cout<<final<<endl;
    }
}