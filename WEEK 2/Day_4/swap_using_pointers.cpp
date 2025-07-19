//C++ Program to swap 2 numbers without using 3rd variable using pointers
#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    if (a != b) {
        *a = *a + *b; 
        *b = *a - *b; 
        *a = *a - *b; 
    }
}

int main()
{
    int num1, num2;
    int *ptr1, *ptr2;
    
    // Input three numbers
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    ptr1 = &num1;
    ptr2 = &num2;

    swap(&num1, &num2);

    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
}