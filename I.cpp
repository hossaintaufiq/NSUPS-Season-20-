#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int max_height = *max_element(candles.begin(), candles.end());
    int count = count_if(candles.begin(), candles.end(), [max_height](int height) {
        return height == max_height;
    });
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> candles(n);
    for (int i = 0; i < n; i++) {
        cin >> candles[i];
    }

    cout << birthdayCakeCandles(candles) << endl;

    return 0;
}
