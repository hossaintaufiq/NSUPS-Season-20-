#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int caseNum = 1;

    while (getline(cin, input)) {
        if (input == "*") {
            break;
        }

        if (input == "Hajj") {
            cout << "Case " << caseNum << ": Hajj-e-Akbar" << endl;
        } else if (input == "Umrah") {
            cout << "Case " << caseNum << ": Hajj-e-Asghar" << endl;
        }

        caseNum++;
    }

    return 0;
}