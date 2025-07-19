#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
	    int D_DSA,D_TOC,D_DM;
	    cin>>D_DSA>>D_TOC>>D_DM;
	    int S_DSA,S_TOC,S_DM;
	    cin>>S_DSA>>S_TOC>>S_DM;
	    
	    int D_total=D_DSA+D_TOC+D_DM;
	    int S_total=S_DSA+S_TOC+S_DM;
	    
	    if(D_total==S_total){
	        if(D_DSA==S_DSA){
	            if(D_TOC==S_TOC){
	                cout<<"TIE"<<endl;
	            }else if(D_TOC>S_TOC){
	                cout<<"Dragon"<<endl;
	            }else{
	                cout<<"Sloth"<<endl;
	            }
	        }else if(D_DSA>S_DSA){
	            cout<<"Dragon"<<endl;
	        }else{
	            cout<<"Sloth"<<endl;
	        }
	    }else if(D_total>S_total){
	        cout<<"Dragon"<<endl;
	    }else{
	        cout<<"Sloth"<<endl;
	    }
	}
}