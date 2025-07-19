#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int soldiers;
    cin>>soldiers;
    int weapon[soldiers]={0};
    
    int even_count=0;
    int odd_count=0;
    
    for(int i=0;i<soldiers;i++){
        cin>>weapon[i];
        
        if(weapon[i]%2==0){
            even_count++;
        }else{
            odd_count++;
        }
    }
    
    if(even_count>odd_count){
        cout<<"READY FOR BATTLE";
    }else{
        cout<<"NOT READY";
    }
}