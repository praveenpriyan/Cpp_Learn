/*1)Create a class with name 'Fruits'
2)Include a constructor that initializes the object’s name and value and increments the object count(count should be a static member).
3)Include a copy constructor that creates a new object as a copy of an existing object and increments the object count.
4)Include a destructor that decrements the object count when an object is destroyed.
5)Include a static function 'GetCount' that returns the number of objects created.
6)Include a friend function 'ShowValue' that can access the private members of Fruits.
7)Use 'this pointer' in a function 'SetValue' to assign an integer to the objects value.
8)Include a function 'PrintInfo' that uses a scope resolution operator (::) to define the function outside of the class definition.
9)Initialize the static member count with 0 outside the class.
10)Print below output*/

#include<iostream>

using namespace std;

class Fruits{
private:
    static int count;
    string name;
    int value;

public:
    Fruits(string n, int v):name(n),value(v)
    {
        count++;
    }

    ~Fruits(){
        count--;
        cout<<"Destructor called for "<<name<<endl;
    }

    Fruits(const Fruits &other) : name(other.name), value(other.value) {
        count++;
        cout<<"Copy Constructor called for "<<name<<endl;
    }
    
    static int GetCount() {
        return count;
    }
    
    friend void ShowValue(const Fruits &f);

    void SetValue(int v) {
        this->value = v;
        cout<<"SetValue - Apple has value "<<v<<endl;
    }
    
    void PrintInfo() const;
};

int Fruits::count = 0;

void Fruits::PrintInfo() const {
    cout << "Apple has value " << value << endl;
}

void ShowValue(const Fruits &f) {
    cout << "ShowValue - Apple has value " << f.value << endl;
}

int main()
{
    Fruits apple("Apple",10);
    cout<<"Constructor called for Apple"<<endl;

    apple.PrintInfo();
    apple.SetValue(20);
    Fruits orange = apple;
    ShowValue(apple);

    cout << "Total objects created: " << Fruits::GetCount() << endl;

    apple.~Fruits();
}