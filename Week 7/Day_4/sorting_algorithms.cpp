#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> &arr)
{
    for(int val: arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
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

void insertionSort(vector<int>& arr)
{
    int n = arr.size();
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}

void merge(vector<int>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1);
    vector<int> R(n2);
    for(int i = 0; i < n1; ++i) L[i] = arr[left + i];
    for(int i = 0; i < n2; ++i) R[i] = arr[mid + i + 1];
    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j]){
            arr[k] = L[i];
            ++i;
        }else{
            arr[k] = R[j];
            ++j;
        }
        ++k;
    }
    while(i < n1)
    {
        arr[k] = L[i];
        ++i;
        ++k;
    }
    while(j < n2)
    {
        arr[k] = R[j];
        ++j;
        ++k;
    }
}

void mergeSort(vector<int>& arr, int left, int right)
{
    if(left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    vector<int> arr = {12, 35, 21, 9, 42, 75, 52};

    cout<<"Original Array: ";
    printArray(arr);

    vector<int> bubbleSorted = arr;
    bubbleSort(bubbleSorted);
    cout<<"Bubble Sort Array: ";
    printArray(bubbleSorted);

    vector<int> selectionSorted = arr;
    selectionSort(selectionSorted);
    cout<<"Selection Sort Array: ";
    printArray(selectionSorted);

    vector<int> insertionSorted = arr;
    insertionSort(insertionSorted);
    cout<<"Insertion Sort Array: ";
    printArray(insertionSorted);

    vector<int> mergeSorted = arr;
    mergeSort(mergeSorted, 0, mergeSorted.size() - 1);
    cout<<"Merge Sort Array: ";
    printArray(mergeSorted);

    vector<int> quickSorted = arr;
    quickSort(quickSorted, 0, quickSorted.size() - 1);
    cout<<"Quick Sort Array: ";
    printArray(quickSorted);

    return 0;
}
