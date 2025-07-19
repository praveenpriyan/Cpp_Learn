#include <iostream>
using namespace std;

int main()
{
    int num;
    int max=-1;
    int sec_max=-1;
    while(true){
        cout<<"Enter a number: ";
        cin>>num;
        if(num>0){
            if(num>max){
                sec_max=max;
                max=num;
            }else if(num>sec_max && sec_max<max)
            {
                sec_max=num;
            }
        }else{
            break;
        }
    }
    cout<<"Second Largest Number: "<<sec_max;
    return 0;
}