#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    int *ptr1, *ptr2, *ptr3;
    
    // Input three numbers
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;

    
    // Assign the addresses of the numbers to the pointers
    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;
    
    // Determine the greatest number using pointers
    int *greatest = ptr1;  // Assume first number is greatest
    
    if (*ptr2 > *greatest) {
        greatest = ptr2;
    }
    
    if (*ptr3 > *greatest) {
        greatest = ptr3;
    }
    
    // Output the greatest number
    cout << "The greatest number is: " << *greatest << endl;
    
    return 0;
}
