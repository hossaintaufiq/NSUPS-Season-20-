#include<bits/stdc++.h>
using namespace std;

int main() {
    int Q; // Number of queries
    cin >> Q;

    map<string, int> studentMarks;

    while (Q--) {
        int type;
        string name;
        cin >> type >> name;

        if (type == 1) {
            int marks;
            cin >> marks;
            // Add marks to the student's total
            studentMarks[name] += marks;
        } else if (type == 2) {
            // Erase the student's marks
            studentMarks.erase(name);
        } else if (type == 3) {
            // Print the marks of the student
            if (studentMarks.find(name) != studentMarks.end()) {
                cout << studentMarks[name] << endl;
            } else {
                cout << 0 << endl; // If student not found
            }
        }
    }

    return 0;
}
