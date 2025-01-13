#include <iostream>
#include <algorithm> // For __gcd function
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxNumerator = 0, maxDenominator = 1; // Initialize result variables

    // Iterate over possible numerators
    for (int a = n / 2; a >= 1; --a) {
        int b = n - a; // Compute denominator
        if (__gcd(a, b) == 1) { // Check if the fraction is irreducible
            maxNumerator = a;
            maxDenominator = b;
            break; // We want the maximum, so we stop at the first valid fraction
        }
    }

    // Output the result
    cout << maxNumerator << " " << maxDenominator << endl;
    return 0;
}
