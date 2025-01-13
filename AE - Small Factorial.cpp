#include <iostream>
using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Input number
        cin >> N;

        // Calculate and print the factorial
        cout << factorial(N) << endl;
    }

    return 0;
}
