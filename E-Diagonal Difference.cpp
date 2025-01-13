#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int l_r= 0;
    int r_l = 0;

    for(int i = 0; i < n; i++) {
        l_r += matrix[i][i];
        r_l += matrix[i][n-1-i];
    }
    cout << abs(l_r - r_l) << endl;


    return 0;
}