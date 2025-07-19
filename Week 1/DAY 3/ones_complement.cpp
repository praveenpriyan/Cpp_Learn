#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    cout << "Original number (binary): " <<bitset<32>(num) << endl;

    int ones_complement = ~num;

    cout << "One's Complement (binary): " <<bitset<32>(ones_complement) << endl;

    cout<<"One's Complement(decimal) "<<ones_complement<<endl;
}