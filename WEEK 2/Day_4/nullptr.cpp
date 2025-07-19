#include <iostream>
using namespace std;

// Function to check if the pointer is null
bool isNull(int* ptr) {
    return ptr == nullptr;
}

int main() {
    int* myPointer = nullptr;

    // Check if the pointer is null
    if (isNull(myPointer)) {
        cout << "The pointer is null." << endl;
    } else {
        cout << "The pointer is not null." << endl;
    }

    return 0;
}