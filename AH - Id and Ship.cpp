#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        char id;
        cin >> id;

        switch (id) {
            case 'B':
            case 'b':
                cout << "BattleShip" << endl;
                break;
            case 'C':
            case 'c':
                cout << "Cruiser" << endl;
                break;
            case 'D':
            case 'd':
                cout << "Destroyer" << endl;
                break;
            case 'F':
            case 'f':
                cout << "Frigate" << endl;
                break;
            default:
                break; // Invalid input, but not mentioned in constraints
        }
    }

    return 0;
}
