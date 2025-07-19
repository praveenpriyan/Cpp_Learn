#include<iostream>
#include<stdexcept>
using namespace std;

class MaxHeap{
private:
    int* heap;
    int capacity;
    int size;

    void heapifyUp(int index)
    {
        if(index==0) return;
        int parentIndex=(index-1)/2;
        if(heap[parentIndex]<heap[index])
        {
            swap(heap[parentIndex], heap[index]);
            heapifyUp(parentIndex);
        }

    }

    void heapifyDown(int index)
    {
        int leftChildIndex = 2*index+1;
        int rightChildIndex=2*index+2;
        int largestIndex=index;

        if(leftChildIndex<size && heap[leftChildIndex]>heap[largestIndex])
        {
            largestIndex=leftChildIndex;
        }

        if(rightChildIndex<size && heap[rightChildIndex]>heap[largestIndex])
        {
            largestIndex=rightChildIndex;
        }

        if(largestIndex!=index)
        {
            swap(heap[index],heap[largestIndex]);
            heapifyUp(largestIndex);
        }
    }

    void resize()
    {
        int* newHeap = new int[capacity * 2];
        for(int i=0;i<size;i++)
        {
            newHeap[i]=heap[i];
        }
        delete[] heap;
        heap=newHeap;
        capacity*=2;
    }

public:
    MaxHeap(int initialCapacity=10):capacity(initialCapacity),size(0)
    {
        heap=new int[capacity];
    }

    ~MaxHeap()
    {
        delete[] heap;
    }

    void insert(int value)
    {
        if(size==capacity)
        {
            resize();
        }
        heap[size]=value;
        heapifyUp(size);
        ++size;
    }

    int extractMax()
    {
        if(size==0)
        {
            throw runtime_error("Heap is Empty!!!");
        }
        int maxValue=heap[0];
        heap[0]=heap[size-1];
        --size;
        if(size>0)
        {
            heapifyDown(0);
        }
        return maxValue;
    }

    int getMax() const
    {
        if(size==0)
        {
            throw runtime_error("Heap is Empty...");
        }
    }

    bool isEmpty() const{
        return size==0;
    }
    void printHeap() const{
        for(int i=0;i<size;i++)
        {
            cout<<heap[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    MaxHeap maxheap;
    
    maxheap.insert(10);
    maxheap.insert(20);
    maxheap.insert(5);
    maxheap.insert(30);
    maxheap.insert(15);

    cout<<"Max-Heap: ";
    maxheap.printHeap();

    cout<<"Maximum Value: "<<maxheap.getMax()<<endl;

    cout<<"Extracting max: "<<maxheap.extractMax()<<endl;

    cout<<"Max-Heap After Execution: ";
    maxheap.printHeap();

    return 0;
}