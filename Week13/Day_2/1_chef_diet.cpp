#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; 
    cin >> test;
    while (test--) {
        int num, protein;
        cin >> num >> protein;
        vector<int> arr(num);
        for (int i = 0; i < num; i++) {
            cin >> arr[i];
        }

        int stored = 0;
        bool enough = true;
        int day = 0;

        for (int i = 0; i < num; i++) {
            stored += arr[i];
            if (stored < protein) {
                enough = false;
                day = i + 1;
                break;
            }
            stored -= protein;
        }

        if (enough) {
            cout << "YES" << endl;
        } else {
            cout << "NO " << day << endl;
        }
    }
    return 0;
}