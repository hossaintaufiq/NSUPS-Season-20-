#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, K; // Total bill and number of friends
        cin >> N >> K;

        int fairShare = N / (K + 1); // Calculate the floor of the fair share
        int totalReimbursement = fairShare * K; // Total amount reimbursed by friends
        int netPayment = N - totalReimbursement; // Net amount you paid

        cout << netPayment << endl; // Output the result for this test case
    }

    return 0;
}