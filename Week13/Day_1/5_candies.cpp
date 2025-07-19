#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int num;
        cin >> num;
        vector<int> full(2 * num);
        unordered_map<int, int> freq;

        for (int i = 0; i < 2 * num; ++i) {
            cin >> full[i];
            freq[full[i]]++;
        }

        bool valid = true;
        for (auto &entry : freq) {
            if (entry.second > 2) {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}