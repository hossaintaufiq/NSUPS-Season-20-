#include <iostream>
#include <string>
#include <bitset>

using namespace std;

// Function to count the number of 1's in the binary representation of a number
int countOnes(int number) {
    return bitset<32>(number).count(); // Convert to binary and count 1's
}

int main() {
    int n; // Number of test cases
    cin >> n;

    while (n--) {
        int m;
        cin >> m;

        // Step 3: Count 1's in the binary representation of M (as decimal)
        int b1 = countOnes(m);

        // Step 6: Treat M as a hexadecimal number, convert it to decimal, and count 1's
        int hexAsDecimal = stoi(to_string(m), nullptr, 16); // Interpret M as hexadecimal
        int b2 = countOnes(hexAsDecimal);

        // Output b1 and b2
        cout << b1 << " " << b2 << endl;
    }

    return 0;
}
