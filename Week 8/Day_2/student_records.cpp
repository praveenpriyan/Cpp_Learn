#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

struct Student{
    string name;
    int roll_number;
    int marks;

    Student (string n="",int r=0,int m=0):name(n),roll_number(r),marks(m){}
};

// Function to compare two students based on their marks
bool compareStudents(const Student& s1, const Student& s2)
{
    return s1.marks>s2.marks;
}

void sortStudents(Student students[],int n)
{
    sort(students,students+n,compareStudents);
}

void printStudents(const Student students[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Name: "<<students[i].name<<" "
            <<"Roll_number: "<<students[i].roll_number<<" "
            <<"Marks: "<<students[i].marks<<endl;
    }
}

int main()
{
    Student students[]={
        {"abc",1234,95},
        {"def",4356,81},
        {"ghi",7689,50},
        {"jkl",4378,73},
        {"pqr",8321,65}
    };
    int n=sizeof(students)/sizeof(students[0]);

    cout<<"Students record before Sorting: "<<endl;
    printStudents(students,n);

    sortStudents(students,n);

    cout<<"Sorted Students record: "<<endl;
    printStudents(students,n);
}