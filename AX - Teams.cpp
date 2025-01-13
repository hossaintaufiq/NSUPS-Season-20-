#include <iostream>
using namespace std;

const int MOD = 1000000007;

// Function to compute (base^exp) % MOD using modular exponentiation
long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) { // If exp is odd
            result = (result * base) % mod;
        }
        base = (base * base) % mod; // Square the base
        exp /= 2;
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        long long N;
        cin >> N;

        // Compute 2^(N-1) % MOD
        long long powerOfTwo = modExp(2, N - 1, MOD);
        // Compute result: N * 2^(N-1) % MOD
        long long result = (N * powerOfTwo) % MOD;

        // Output result in the required format
        cout << "Case #" << t << ": " << result << endl;
    }
    return 0;
}
