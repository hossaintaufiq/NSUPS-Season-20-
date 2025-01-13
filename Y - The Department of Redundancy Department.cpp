#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    unordered_map<int, int> countMap;
    vector<int> uniqueList;

    int num;
    while (cin >> num) {
        countMap[num]++;
        if (countMap[num] == 1) {
            uniqueList.push_back(num);
        }
    }

    for (int num : uniqueList) {
        cout << num << " " << countMap[num] << endl;
    }

    return 0;
}