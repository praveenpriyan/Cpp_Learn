#include <bits/stdc++.h>
using namespace std;

void multiply(int x, vector<int> &result) {
    int carry = 0;
    for (int i = 0; i < result.size(); i++) {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n) {
    vector<int> result;
    result.push_back(1);
    for (int x = 2; x <= n; x++) {
        multiply(x, result);
    }
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int test;
    cin >> test;
    for (int i = 0; i < test; i++) {
        int num;
        cin >> num;
        factorial(num);
    }
    return 0;
}