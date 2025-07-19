#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; 
    cin >> test;
    while (test--) {
        int num; 
        cin >> num;
        vector<int> arrB(num);
        for (int i = 0; i < num; i++) {
            cin >> arrB[i];
        }

        // Check if the sum of all elements in B is even
        int sumB = accumulate(arrB.begin(), arrB.end(), 0);
        if (sumB % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}