#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Function to calculate the area of a triangle using Heron's formula
double triangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0; // Semi-perimeter
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;
    while (cin >> a >> b >> c) {
        // Calculate the triangle's area
        double A = triangleArea(a, b, c);

        // Semi-perimeter
        double s = (a + b + c) / 2.0;

        // Circumradius R
        double R = (a * b * c) / (4.0 * A);

        // Inradius r
        double r = A / s;

        // Areas
        double incircleArea = M_PI * r * r;
        double circumcircleArea = M_PI * R * R;
        double violetArea = A - incircleArea;
        double sunflowerArea = circumcircleArea - A;

        // Output the results
        cout << fixed << setprecision(4);
        cout << sunflowerArea << " " << violetArea << " " << incircleArea << endl;
    }

    return 0;
}
