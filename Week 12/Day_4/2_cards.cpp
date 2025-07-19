#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test; cin>>test;
	for(int i=0;i<test;i++){
	    int cards,face_up;
	    cin>>cards>>face_up;
	    int face_down=cards-face_up;
	    int count=0;
	    if(cards==face_up || face_up==0){
	        count=0;
	    }else if(face_up>face_down){
	        count=cards-face_up;
	    }else{
	        count=cards-face_down;
	    }
	    cout<<count<<endl;
	}
}