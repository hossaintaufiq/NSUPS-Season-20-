#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        // Check if the sum of angles is 180
        if (A + B + C == 180) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
