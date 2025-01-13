#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int L;
        cin >> L;

        double W = (6.0 / 10.0) * L;
        double R = (1.0 / 5.0) * L;

        double areaRed = M_PI * R * R;
        double areaGreen = L * W - areaRed;

        cout << fixed << setprecision(2) << areaRed << " " << areaGreen << endl;
    }

    return 0;
}