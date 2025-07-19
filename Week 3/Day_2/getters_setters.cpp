#include<iostream>
using namespace std;

class MyClass{

private:
    int data;

public:
    int setdata(int value)
    {
        this->data=value;
    }
    int getdata()const
    {
        return this->data;
    }
};

int main()
{
    MyClass obj;
    obj.setdata(20);
    int value = obj.getdata();
    cout<<"The value is: "<<value<<endl;
}