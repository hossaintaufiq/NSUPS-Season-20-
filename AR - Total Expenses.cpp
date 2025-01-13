#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int quantity, price;
        cin >> quantity >> price;
        
        // Calculate total cost
        double total = quantity * price;
        
        // Apply discount if quantity > 1000
        if (quantity > 1000) {
            total *= 0.9; // Apply 10% discount
        }
        
        // Print total expenses with 6 decimal places
        cout << fixed << setprecision(6) << total << endl;
    }
    
    return 0;
}
