#include <iostream>

int countLuckyDigits(long long n) {
    int count = 0;
    while (n != 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            count++;
        }
        n /= 10;
    }
    return count;
}

bool isNearlyLucky(long long n) {
    int luckyCount = countLuckyDigits(n);
    return luckyCount == 4 || luckyCount == 7;
}

int main() {
    long long n;
    std::cin >> n;
    if (isNearlyLucky(n)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}