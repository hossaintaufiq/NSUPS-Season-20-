#include <bits/stdc++.h>


int main() {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    int dx = std::abs(x2 - x1); // Absolute difference in x-coordinates
    int dy = std::abs(y2 - y1); // Absolute difference in y-coordinates

    int diagonal_steps = std::min(dx, dy); // Number of diagonal steps
    int straight_steps = std::max(dx, dy) - diagonal_steps; // Number of straight steps

    int total_steps = diagonal_steps + straight_steps;
    std::cout << total_steps << std::endl;

    return 0;
}