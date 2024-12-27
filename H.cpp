#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void miniMaxSum(vector<int> arr) {
    long long totalSum = 0;
    for (int num : arr) {
        totalSum += num;
    }

    long long minSum = totalSum - *max_element(arr.begin(), arr.end());
    long long maxSum = totalSum - *min_element(arr.begin(), arr.end());

    cout << minSum << " " << maxSum << endl;
}

int main() {
    vector<int> arr(5);
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }

    miniMaxSum(arr);

    return 0;
}
