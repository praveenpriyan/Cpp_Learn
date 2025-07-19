#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

void toUpperCase(string &str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper);
}

void toLowerCase(string &str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <toUpper|toLower>" << endl;
        return 1;
    }

    string operation = argv[1];
    if (operation != "toUpper" && operation != "toLower") {
        cerr << "Invalid operation. Use 'toUpper' or 'toLower'." << endl;
        return 1;
    }

    string input;
    cout << "Enter the string: ";
    getline(cin, input);

    if (operation == "toUpper") {
        toUpperCase(input);
    } else if (operation == "toLower") {
        toLowerCase(input);
    }

    cout << "Converted string: " << input << endl;
    return 0;
}