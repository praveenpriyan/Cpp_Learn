#include <iostream>
#include <cmath> // for sin, cos, tan, and M_PI

using namespace std;

// Function to convert degrees to radians
double degreesToRadians(double degrees) {
    return degrees * (M_PI / 180.0);
}

int main() {
    double degrees;

    cout << "Enter an angle in degrees: ";
    cin >> degrees;

    // Convert degrees to radians
    double radians = degreesToRadians(degrees);

    // Calculate trigonometric ratios
    double sinValue = sin(radians);
    double cosValue = cos(radians);
    double tanValue = tan(radians);

    // Print results
    cout << "Angle in radians: " << radians <<endl;
    cout << "sin(" << degrees << " degrees) = " << sinValue <<endl;
    cout << "cos(" << degrees << " degrees) = " << cosValue <<endl;
    cout << "tan(" << degrees << " degrees) = " << tanValue <<endl;

    return 0;
}
