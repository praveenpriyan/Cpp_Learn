#include <iostream>

using namespace std;

// Function to compute the GCD using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute the LCM
int lcm(int a, int b, int gcd) {
    return (a * b) / gcd;
}

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter a first number: ";
    cin >> num1;
    cout << "Enter a second number: ";
    cin >> num2;

    // Calculate GCD
    int gcdResult = gcd(num1, num2);

    // Calculate LCM
    int lcmResult = lcm(num1, num2, gcdResult);

    // Output the results
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcdResult <<endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcmResult <<endl;

    return 0;
}
