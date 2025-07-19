/*Create a shared pointer to an integer with value 42. Create a unique pointer to a double with value 3.14.*/

#include<iostream>
#include<memory>
using namespace std;

int main()
{
    shared_ptr<int> sharedPtr = make_shared<int>(42);
    cout<<"Shared Pointer Value: "<<*sharedPtr<<endl;

    unique_ptr<double> uniquePtr = make_unique<double>(3.14);
    cout<<"Unique Pointer Value: "<<*uniquePtr<<endl;

    return 0;
}