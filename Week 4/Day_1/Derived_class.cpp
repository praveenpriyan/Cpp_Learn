#include<iostream>
using namespace std;

class Animal
{
public:
    void eat(){
        cout<<"Calling Eat function in Animal class"<<endl;
    }
    void sleep(){
        cout<<"Calling Sleep function in Animal class"<<endl;
    }
};

class Dog : public Animal
{
public:
    void bark(){
        cout<<"Calling Bark function in Dog class"<<endl;
    }
};

int main()
{
    Dog myDog;

    myDog.eat();
    myDog.sleep();

    myDog.bark();
}