#include<iostream>
#include<vector>
using namespace std;

void fillVector(vector<int>& vec)
{
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
}

void printVector(const vector<int>& vec)
{
    for(int num : vec)
    {
        cout<<num<<endl;
    }
    cout<<endl;
}

int main()
{
    vector<int> numbers;

    fillVector(numbers);

    cout<<"Elements in the Vector are:"<<endl;
    printVector(numbers);
}