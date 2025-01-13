#include <iostream>
using namespace std;

// Function to check if N can be reduced to zero
bool canMakeZero(int n) {
    // If N is a non-negative combination of 3 and 4
    while (n >= 0) {
        if (n % 3 == 0) {
            return true;
        }
        n -= 4; // Try subtracting 4 and check
    }
    return false; // If we can't make N zero
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        if (canMakeZero(N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
