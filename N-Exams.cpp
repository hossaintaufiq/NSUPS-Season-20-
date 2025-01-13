#include <iostream>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        // Calculate the total number of students
        int totalStudents = X * Y;

        // Check if more than 50% passed
        if (Z > totalStudents / 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    solve();
    return 0;
}