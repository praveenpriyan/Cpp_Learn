#include <iostream>
#include <iomanip> // For std::setw

using namespace std;

int main() {
    // Print header
    cout << setw(10) << "ASCII" << setw(10) << "Character" <<endl;
    cout << "--------------------------" <<endl;

    // Loop through all ASCII values from 0 to 255
    for (int i = 0; i <= 255; ++i) {
        // Print the ASCII value and its corresponding character
        cout <<setw(10) << i << setw(10) << static_cast<char>(i) <<endl;
    }

    return 0;
}
