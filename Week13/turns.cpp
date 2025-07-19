#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        int limak = 0, bob = 0;
        int turn = 1;
        while (true) {
            if (turn % 2 != 0) { // Limak's turn
                if (limak + turn > A) {
                    cout << "Bob" << endl;
                    break;
                }
                limak += turn;
            } else { // Bob's turn
                if (bob + turn > B) {
                    cout << "Limak" << endl;
                    break;
                }
                bob += turn;
            }
            turn++;
        }
    }
    return 0;
}