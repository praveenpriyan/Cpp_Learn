#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int minIdx=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minIdx])
            {
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
}

int main()
{
    int arr[]={65,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Given Array is: ";
    printArray(arr,n);

    selectionSort(arr,n);
    cout<<"Sorted array is: ";
    printArray(arr,n);
}