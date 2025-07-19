#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int duration;
    int start;
    cin>>duration>>start;
    
    int remain=duration-start;
    int speed=start/2;
    
    int total=remain+speed;
    cout<<total<<endl;
}