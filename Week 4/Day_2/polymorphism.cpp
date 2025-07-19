#include<iostream>
using namespace std;

class Sample{
public:
    int add(int a)
    {
        cout<<"Calling int paramter with one parameter: "<<a<<endl;
    }

    int add(int a, int b)
    {
        cout<<"Calling int paramter with two parameters: "<<a+b<<endl;
    }

    double add(double a)
    {
        cout<<"Calling double paramter with one parameter: "<<a<<endl;
    }
};

int main()
{
    Sample samp;

    samp.add(2);
    samp.add(5,10);
    samp.add(4.3);   
}