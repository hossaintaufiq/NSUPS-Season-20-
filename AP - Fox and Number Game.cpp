#include <bits/stdc++.h>
using namespace std;

// Function to compute GCD of an array
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Compute GCD of the array
    int resultGCD = arr[0];
    for (int i = 1; i < n; i++) {
        resultGCD = gcd(resultGCD, arr[i]);
    }

    // Compute minimal sum
    int minimalSum = resultGCD * n;

    // Output the result
    cout << minimalSum << endl;

    return 0;
}
