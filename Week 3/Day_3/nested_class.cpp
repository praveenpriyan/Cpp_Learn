/*C++ program to demonstrate the nested class usage - 
Create an 'Outer' class with a public nested class called 'Inner'. 
The 'Inner' class should have a method to display its own data and also access the private data of the 
'Outer' class through a method that takes a pointer to an 'Outer' object.*/

#include<iostream>
using namespace std;

class Outer{
private:
    int OuterData;
public:
    Outer(int data): OuterData(data){}

    class Inner
    {
    private:
        int InnerData;
    public:
        Inner(int data):InnerData(data){}

        void displayInnerData()const{
            cout<<"Inner Data: "<<InnerData<<endl;
        }

        void displayOuterData(Outer *outer)const{
            cout<<"Outer Data: "<<outer->OuterData<<endl;
        }
    };
};

int main()
{
    Outer outerInstance(100);
    Outer::Inner innerInstance(200);

    innerInstance.displayInnerData();

    innerInstance.displayOuterData(&outerInstance);
}