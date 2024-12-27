#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < n; ++i) {
        primaryDiagonalSum += arr[i][i];
        secondaryDiagonalSum += arr[i][n - i - 1];
    }

    return abs(primaryDiagonalSum - secondaryDiagonalSum);
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    int result = diagonalDifference(arr);
    cout << result << endl;

    return 0;
}
