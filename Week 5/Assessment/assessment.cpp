#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout<<"Elements in the vector are:"<<endl;
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<endl;
    }

    numbers.pop_back();
    cout<<"Size of the vector after pop-back: "<<numbers.size()<<endl;
    cout<<"Elements in the vector after pop_back:"<<endl;
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<endl;
    }
}