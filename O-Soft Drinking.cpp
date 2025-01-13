#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Input variables
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // Calculate total resources
    int total_drink = k * l; // Total milliliters of drink
    int total_slices = c * d; // Total lime slices
    int total_salt = p; // Total grams of salt

    // Calculate the number of toasts possible with each resource
    int toasts_drink = total_drink / nl;
    int toasts_slices = total_slices;
    int toasts_salt = total_salt / np;

    // Find the limiting factor (minimum of the three)
    int max_toasts = min({toasts_drink, toasts_slices, toasts_salt});

    // Calculate the number of toasts each friend can make
    int result = max_toasts / n;

    // Output the result
    cout << result << endl;

    return 0;
}