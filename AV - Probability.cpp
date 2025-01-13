#include <iostream>
#include <string>
using namespace std;

// Function to check if a number contains digit '0'
bool containsZero(int number) {
    string numStr = to_string(number);
    return numStr.find('0') != string::npos;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;

        int countWithZero = 0;
        int totalNumbers = B - A + 1;

        // Count numbers with at least one zero
        for (int i = A; i <= B; ++i) {
            if (containsZero(i)) {
                countWithZero++;
            }
        }

        // Output the probability as a fraction
        cout << countWithZero << "/" << totalNumbers << endl;
    }

    return 0;
}
