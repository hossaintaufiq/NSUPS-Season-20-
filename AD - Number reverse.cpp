#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    bool isNegative = (N < 0); // Check if the number is negative
    if (isNegative) {
        N = -N; // Make the number positive for reversal
    }

    long long reversed = 0;
    while (N > 0) {
        int digit = N % 10; // Extract the last digit
        reversed = reversed * 10 + digit; // Append the digit to reversed
        N /= 10; // Remove the last digit
    }

    if (isNegative) {
        reversed = -reversed; // Restore the negative sign if necessary
    }

    cout << reversed << endl;
    return 0;
}
