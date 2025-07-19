#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;

    if (num > 10) {
        cout << "The maximum number of elements allowed is 10." << endl;
        return 1;
    }

    int arr[10];

    for (int i = 0; i < num; i++) {
        cout << "Enter number-" << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < num - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                num--;
                j--; // Check the new element at index j
            }
        }
    }

    cout << "After removing duplicates, the elements are:" << endl;
    for (int i = 0; i < num; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
