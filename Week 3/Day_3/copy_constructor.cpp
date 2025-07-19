/*C++ program that defines a Student class with a constructor and a copy constructor. 
Demonstrate how to create an object, 
make a copy of it using the copy constructor, and print the roll number of the student.*/

#include<iostream>
using namespace std;

class Student
{
private:
    int roll_number;
public:
    Student(int roll):roll_number(roll){
        cout<<"Constructor called for Student (roll_number): "<<roll_number<<endl;
    }
    Student(const Student &other):roll_number(other.roll_number){
        cout<<"Copy Constructor called for Student (roll_number): "<<roll_number<<endl;
    }

    void printRollNumber()const{
        cout<<"Printing Roll Number: "<<roll_number<<endl;
    }
};

int main()
{
    Student student1(12);
    student1.printRollNumber();

    Student student2 = student1;
    student2.printRollNumber();
}