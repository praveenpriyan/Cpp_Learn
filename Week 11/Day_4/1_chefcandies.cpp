#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    
    for(int i=0;i<test;i++){
        int childeren;
        int candies; //1 packet has 4 candies
        
        int packet=0;
        
        cin>>childeren>>candies;
        int remain=childeren-candies;
        if(candies<childeren)
        {
            if(remain<=4){
                packet=1;
            }else if(remain%4==0){
                packet=remain/4;
            }else{
                packet=(remain/4)+1;
            }
        }else{
            packet=0;
        }
        cout<<packet<<endl;
    }
}