#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, temp = 0, count = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    temp = arr[n - 1];

    for (int i = 0; i < n; i++)
    {
        if (temp == arr[i])
            count++;
    }
    cout << count;
    return 0;
}