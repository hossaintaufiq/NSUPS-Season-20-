#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input the number of integers and the divisor
    long long N, K;
    cin >> N >> K;

    // Initialize a counter for divisible numbers
    long long count = 0;

    // Iterate through the integers and check divisibility
    for (long long i = 0; i < N; i++) {
        long long Ai;
        cin >> Ai;
        if (Ai % K == 0) {
            count++;
        }
    }

    // Output the count of numbers divisible by K
    cout << count << endl;

    return 0;
}
