#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>& arr)
{
    for(int val:arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}

void selectionSort(vector<int>& arr)
{
    int n = arr.size();
    for(int i = 0; i < n-1; i++)
    {
        int minIdx = i;
        for(int j = i+1; j < n; ++j)
        {
            if(arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};
    cout<<"Given array is: ";
    printArray(arr);

    vector<int> selectionSorted = arr;
    selectionSort(selectionSorted);
    cout<<"Selection Sort Array: ";
    printArray(selectionSorted);
}