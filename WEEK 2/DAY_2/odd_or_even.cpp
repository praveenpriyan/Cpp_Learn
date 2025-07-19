#include<iostream>

using namespace std;

int main()
{
    int num;
    int positive = 0;
    int negative = 0;
    int zero = 0;
    int even = 0;
    int odd = 0;

    for(int i=1;i<=20;i++)
    {
        cout<<"Enter the number-"<<i<<":";
        cin>>num;
        if(num>0)
        {
            positive++;
        }
        else if(num<0){
            negative++;
        }
        else{
            zero++;
        }

        if(num%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"The Number of Positive numbers: "<<positive<<endl;
    cout<<"The Number of Negative numbers: "<<negative<<endl;
    cout<<"The Number of Zero numbers: "<<zero<<endl;
    cout<<"The Number of Even numbers: "<<even<<endl;
    cout<<"The Number of ODD numbers: "<<odd<<endl;
}