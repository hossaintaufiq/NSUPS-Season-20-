#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    while (true) {
        int a, b, c;
        cin >> a >> b >> c;

        // Stop if the input is "0 0 0"
        if (a == 0 && b == 0 && c == 0) break;

        // Sort the sides to ensure `c` is the largest
        int sides[3] = {a, b, c};
        sort(sides, sides + 3);

        // Check Pythagorean theorem
        if (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2]) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }

    return 0;
}

