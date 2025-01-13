#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    // Calculate kmax
    long long max_team_size = n - m + 1;
    long long kmax = (max_team_size * (max_team_size - 1)) / 2;

    // Calculate kmin
    long long x = n / m; // size of smaller teams
    long long r = n % m; // remaining participants
    long long kmin = r * (x * (x + 1)) / 2 + (m - r) * (x * (x - 1)) / 2;

    cout << kmin << " " << kmax << endl;

    return 0;
}
