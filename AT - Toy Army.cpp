#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Maximum number of soldiers killed in three turns
    int max_killed = (3 * n) / 2;

    cout << max_killed << endl;

    return 0;
}
