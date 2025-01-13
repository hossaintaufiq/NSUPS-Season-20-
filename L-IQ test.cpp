#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int odd_count = 0, even_count = 0;
    int odd_index = -1, even_index = -1;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num % 2 == 0) {
            even_count++;
            even_index = i + 1;
        } else {
            odd_count++;
            odd_index = i + 1;
        }
    }

    if (even_count == 1) {
        cout << even_index << endl;
    } else {
        cout << odd_index << endl;
    }

    return 0;
}