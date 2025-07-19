#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[n][n];
    int result[n][n]={0,0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Original Matrix: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"After Rotation: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            result[i][j] = arr[j][i];
        }
    }

    for(int i=0;i<n;i++)
    {
        int end=n-1;
        int start=0;
        while(start<end)
        {
            swap(result[i][start],result[i][end]);
            start++;
            end--;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}