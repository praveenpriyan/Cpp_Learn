#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    int test;
    cin >> test;
    for (int i = 0; i < test; i++) {
        int length;
        string name;
        cin >> length;
        cin >> name;
        int count = 0;
        bool hardToPronounce = false;
        for (int j = 0; j < length; j++) {
            if (!isVowel(name[j])) {
                count++;
                if (count >= 4) {
                    hardToPronounce = true;
                    break;
                }
            } else {
                count = 0;
            }
        }
        if (hardToPronounce) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}