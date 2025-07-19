#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    cout<<"Elements in the vector:"<<endl;
    for(size_t i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<endl;
    }
    cout<<endl;
    
    numbers.pop_back();

    cout << "Size of the vector after pop_back: " << numbers.size() <<endl;
    cout << "Elements in the vector using range-based for loop: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout<<endl;

    return 0;
}