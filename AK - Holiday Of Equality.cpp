#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; // Number of citizens
    cin >> n;

    vector<int> welfare(n);
    for (int i = 0; i < n; ++i) {
        cin >> welfare[i];
    }

    // Find the maximum welfare among all citizens
    int maxWelfare = *max_element(welfare.begin(), welfare.end());

    // Calculate the total amount needed to equalize the welfare
    int totalCost = 0;
    for (int i = 0; i < n; ++i) {
        totalCost += (maxWelfare - welfare[i]);
    }

    cout << totalCost << endl;

    return 0;
}
