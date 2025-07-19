#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; 
    cin >> test;
    for(int i = 0; i < test; i++) {
        int friends, left_shoes;
        cin >> friends >> left_shoes;
        
        // Calculate the number of pairs needed
        int pairs_needed = friends;
        
        // Calculate the number of right shoes needed
        int right_shoes_needed = pairs_needed;
        
        // Calculate the number of left shoes needed
        int left_shoes_needed = max(0, pairs_needed - left_shoes);
        
        // Total extra shoes needed
        int extra_shoes_needed = left_shoes_needed + right_shoes_needed;
        
        cout << extra_shoes_needed << endl;
    }
    return 0;
}