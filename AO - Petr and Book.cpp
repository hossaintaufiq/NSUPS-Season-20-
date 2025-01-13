#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; // Number of pages in the book
    cin >> n;

    vector<int> pages(7); // Pages Petr can read on each day of the week
    for (int i = 0; i < 7; i++) {
        cin >> pages[i];
    }

    int currentDay = 0; // Start with Monday (index 0)
    while (n > 0) {
        n -= pages[currentDay]; // Subtract the pages Petr reads that day
        if (n <= 0) {
            // If the book is finished, output the current day (1-based index)
            cout << currentDay + 1 << endl;
            break;
        }
        currentDay = (currentDay + 1) % 7; // Move to the next day, looping back to Monday
    }

    return 0;
}
