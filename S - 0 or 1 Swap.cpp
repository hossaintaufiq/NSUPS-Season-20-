#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> p(N);
    for (int i = 0; i < N; i++) {
        std::cin >> p[i];
    }

    std::vector<int> sorted_p = p;
    std::sort(sorted_p.begin(), sorted_p.end());

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (p[i] != sorted_p[i]) {
            count++;
        }
    }

    if (count <= 2) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}