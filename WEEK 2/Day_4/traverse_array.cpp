#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    int *ptr = arr; 
    
    // Traverse the array using the pointer
    cout << "Array elements using pointer traversal: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Value at arr[" << i << "] = " << *(ptr + i) << ", Address = " << (ptr + i) << endl;
    }
    
    return 0;
}
