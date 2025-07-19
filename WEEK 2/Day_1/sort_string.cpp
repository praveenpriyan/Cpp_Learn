#include <iostream>
#include <string>
#include <algorithm> // for sort

using namespace std;

int main() {
    string inputString;

    // Get the string input from the user
    cout << "Enter the string: ";
    getline(cin, inputString);

    // Sort the string using sort
    sort(inputString.begin(), inputString.end());

    // Output the sorted string
    cout << "Sorted string: " << inputString <<endl;

    return 0;
}
