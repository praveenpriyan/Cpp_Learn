#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> my_set;

    my_set.insert(5);
    my_set.insert(10);
    my_set.insert(15);
    my_set.insert(20);
    my_set.insert(25);

    cout<<"Elements in the set: "<<endl;
    for(int num:my_set)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    int element_to_check=7;
    if(my_set.find(element_to_check) != my_set.end())
    {
        cout<<"Element "<<element_to_check<<" is in the set"<<endl;
    }
    else {
        cout << "Element " << element_to_check << " is not in the set." <<endl;
    }

    element_to_check=20;
    if(my_set.find(element_to_check) != my_set.end())
    {
        cout<<"Element "<<element_to_check<<" is in the set"<<endl;
    }
    else {
        cout << "Element " << element_to_check << " is not in the set." <<endl;
    }
}