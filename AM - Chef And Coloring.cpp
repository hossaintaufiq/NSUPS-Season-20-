#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Number of rooms
        cin >> N;

        string S; // Current color configuration
        cin >> S;

        // Count the occurrences of 'R', 'G', and 'B'
        int countR = 0, countG = 0, countB = 0;

        for (char c : S) {
            if (c == 'R') countR++;
            else if (c == 'G') countG++;
            else if (c == 'B') countB++;
        }

        // Find the maximum count of any single color
        int maxCount = max({countR, countG, countB});

        // Minimum rooms to repaint is total rooms minus the maximum count
        cout << (N - maxCount) << endl;
    }

    return 0;
}

