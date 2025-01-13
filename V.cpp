#include <iostream>
using namespace std;

int minMovesToOne(long long n) {
    int moves = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else if (n % 3 == 0) {
            n /= 3;
            n *= 2;
        } else if (n % 5 == 0) {
            n /= 5;
            n *= 4;
        } else {
            return -1;  // Not possible to reach 1
        }
        moves++;
    }
    return moves;
}

int main() {
    int q;
    cin >> q;

    while (q--) {
        long long n;
        cin >> n;
        cout << minMovesToOne(n) << endl;
    }

    return 0;
}