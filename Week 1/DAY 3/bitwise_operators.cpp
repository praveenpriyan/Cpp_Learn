#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter value for a: ";
    cin>>a;
    cout<<"Enter value for b: ";
    cin>>b;

    int bitwise_and= a & b;
    cout<<"Bitwise AND: "<<bitwise_and<<endl;

    int bitwise_or= a | b;
    cout<<"Bitwise OR: "<<bitwise_or<<endl;

    int bitwise_xor= a ^ b;
    cout<<"Bitwise XOR: "<<bitwise_xor<<endl;

    int bitwise_not = ~a;
    cout<<"Bitwise NOT: "<<bitwise_not<<endl;

    int bitwise_left_shift = a << 2;
    cout<<"Bitwise Left-Shift: "<<bitwise_left_shift<<endl;

    int bitwise_right_shift = a << 1;
    cout<<"Bitwise Right-Shift: "<<bitwise_right_shift<<endl;

    return 0;
}