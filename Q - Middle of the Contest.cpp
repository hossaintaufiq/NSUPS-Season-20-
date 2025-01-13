#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    char colon;
    cin >> h1 >> colon >> m1;
    cin >> h2 >> colon >> m2;

    int totalMinutes1 = h1 * 60 + m1;
    int totalMinutes2 = h2 * 60 + m2;

    int midpointMinutes = (totalMinutes1 + totalMinutes2) / 2;
    int h3 = midpointMinutes / 60;
    int m3 = midpointMinutes % 60;

    cout << setfill('0') << setw(2) << h3 << ":" << setw(2) << m3 << endl;

    return 0;
}