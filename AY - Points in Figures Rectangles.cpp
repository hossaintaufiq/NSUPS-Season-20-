#include <iostream>
#include <vector>
using namespace std;

// Structure to represent a rectangle
struct Rectangle {
    double x1, y1, x2, y2;
};

// Function to check if a point is inside a rectangle
bool isInside(const Rectangle& rect, double px, double py) {
    return (rect.x1 < px && px < rect.x2 && rect.y2 < py && py < rect.y1);
}

int main() {
    vector<Rectangle> rectangles;
    vector<pair<double, double>> points;
    string input;

    // Reading rectangles
    while (cin >> input && input != "*") {
        if (input == "r") {
            double x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            rectangles.push_back({x1, y1, x2, y2});
        }
    }

    // Reading points
    while (true) {
        double px, py;
        cin >> px >> py;
        if (px == 9999.9 && py == 9999.9) break;
        points.push_back({px, py});
    }

    // Processing each point
    for (size_t i = 0; i < points.size(); ++i) {
        double px = points[i].first;
        double py = points[i].second;
        bool contained = false;

        // Check if the point is inside any rectangle
        for (size_t j = 0; j < rectangles.size(); ++j) {
            if (isInside(rectangles[j], px, py)) {
                cout << "Point " << i + 1 << " is contained in figure " << j + 1 << endl;
                contained = true;
            }
        }

        // If not contained in any rectangle
        if (!contained) {
            cout << "Point " << i + 1 << " is not contained in any figure" << endl;
        }
    }

    return 0;
}
