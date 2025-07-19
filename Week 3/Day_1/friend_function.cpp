#include<iostream>
using namespace std;

class MyClass
{
private:
    int privateData;

public:
    MyClass(int Val):privateData(Val){}

    friend void showData(const MyClass& obj);
};

void showData(const MyClass& obj)
{
    cout<<"Private Data: "<<obj.privateData<<endl;
}

int main()
{
    MyClass obj(23);

    showData(obj);
}
