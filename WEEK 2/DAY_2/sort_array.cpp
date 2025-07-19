#include<iostream>

using namespace std;

int main()
{
    int i,j,k;
    int num;
    cout<<"Enter the Number of elements:";
    cin>>num;

    int arr[num];
    for(i=0;i<num;i++)
    {
        cout<<"Enter the number "<<i+1<<":";
        cin>>arr[i];
    }
    //sorting algorithm
    for(i=0;i<num-1;i++)
    {
        for(j=0;j<num-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout << "The sorted array is:" << endl;
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}