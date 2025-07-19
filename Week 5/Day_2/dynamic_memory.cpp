#include<iostream>
using namespace std;

int main()
{
    int* singleInt=new int;
    if(!singleInt)
    {
        cerr<<"Memory allocation Failed for singleInt"<<endl;
        return 1;
    }

    *singleInt=42;
    cout<<"Value of an single integer: "<<*singleInt<<endl;

    delete singleInt;

    int arraySize=5;
    int* intArray = new int[arraySize];

    if(!intArray)
    {
        cerr<<"Memory allocation Failed for Array Int"<<endl;
        return 1;
    }

    for(int i=0;i<arraySize;i++)
    {
        intArray[i]=i+1;
    }
    cout<<"Values for Array of integers:"<<endl;
    for(int i=0;i<arraySize;i++)
    {
        cout<<intArray[i]<<endl;
    }
    cout<<endl;

    delete[] intArray;

    return 0;
}