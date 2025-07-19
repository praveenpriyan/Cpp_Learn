#include <iostream>
#include <string>

using namespace std;

void removeCharacter(string& str, char charToRemove) {
    string result;
    result.reserve(str.size()); // Reserve space to optimize performance

    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] != charToRemove) {
            result += str[i];
        }
    }

    str = result;
}

int main() {
    string inputString;
    char characterToRemove;
    
    // Get the string input from the user
    cout << "Enter the string: ";
    getline(cin, inputString);
    
    // Get the character to remove from the user
    cout << "Enter the character to remove: ";
    cin >> characterToRemove;
    
    // Remove the specified character
    removeCharacter(inputString, characterToRemove);
    
    // Output the modified string
    cout << "Modified string: " << inputString <<endl;
    
    return 0;
}
