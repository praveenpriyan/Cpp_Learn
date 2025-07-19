#include<iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Enter a year: ";
    cin>>year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "Given year is a leap year: " << year << endl;
            } else {
                cout << "Given year is NOT a leap year: " << year << endl;
            }
        } else {
            cout << "Given year is a leap year: " << year << endl;
        }
    } else {
        cout << "Given year is NOT a leap year: " << year << endl;
    }

    return 0;
}
