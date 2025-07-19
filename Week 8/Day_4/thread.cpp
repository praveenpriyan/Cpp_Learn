#include<iostream>
#include<vector>
#include<thread>
#include<mutex>
using namespace std;

mutex mtx;
int counter=0;

void incrementCounter(int numIncrements)
{
    for(int i=0;i<numIncrements;i++)
    {
        lock_guard<mutex> lock(mtx);
        ++counter;
    }
}
int main()
{
    const int numThreads=10;
    const int incrementsPerThread=1000;

    vector<thread> threads;

    for(int i=0;i<numThreads;i++)
    {
        threads.emplace_back(incrementCounter,incrementsPerThread);
    }
    for(auto& th:threads)
    {
        th.join();
    }
    cout<<"Final Counter Value: "<<counter<<endl;

    return 0;
}