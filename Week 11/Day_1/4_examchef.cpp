#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    
    for(int i=0;i<test;i++){
        int schools;
        int students;
        int passed_students;
        
        cin>>schools>>students>>passed_students;
        
        int total_students=schools*students;
        
        float percentage=(static_cast<float>(passed_students)/total_students)*100;
        
        if(percentage>50){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}