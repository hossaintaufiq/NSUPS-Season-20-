#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; // Number of slogans
    cin >> N;
    cin.ignore(); // To handle the newline character after N

    unordered_map<string, string> sloganMap;

    // Reading the slogans
    for (int i = 0; i < N; ++i) {
        string firstLine, secondLine;
        getline(cin, firstLine); // Read the first line of the slogan
        getline(cin, secondLine); // Read the corresponding second line
        sloganMap[firstLine] = secondLine; // Store in the map
    }

    int Q; // Number of queries
    cin >> Q;
    cin.ignore(); // To handle the newline character after Q

    // Processing the queries
    for (int i = 0; i < Q; ++i) {
        string query;
        getline(cin, query); // Read the first line of the query
        cout << sloganMap[query] << endl; // Print the corresponding second line
    }

    return 0;
}
