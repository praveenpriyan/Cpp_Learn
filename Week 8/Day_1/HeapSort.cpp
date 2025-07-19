#include<iostream>
using namespace std;

// Function to heapify a subtree rooted with node i which is an index in arr[]
void heapify(int arr[],int n,int i)
{
    int largest=i; //Initialise largest as root
    int left=2*i+1; //left child
    int right=2*i+2; //right child

    // If left child is larger than root
    if(left<n && arr[left]>arr[largest])
    {
        largest=left;
    }

    // If right child is larger than root
    if(right<n && arr[right]>arr[largest])
    {
        largest=right;
    }

    //If larger is not root
    if(largest != i)
    {
        //Swap the root with the largest
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest); //recursive affected the sub-tree
    }
}

//Main function to perform heap sort.
void heapSort(int arr[], int n)
{
    //Build heap re-arrange array
    for(int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);

    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);

        heapify(arr,n,i);
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={12,7,5,23,41};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Unsorted Array: ";
    printArray(arr,n);

    heapSort(arr,n);

    cout<<"Sorted Array: ";
    printArray(arr,n);

    return 0;
}