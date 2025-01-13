#include <iostream>
using namespace std;

int main() {
    unsigned int a, b;
    
    // Read input until EOF
    while (cin >> a >> b) {
        // Perform bitwise addition (XOR) since carry is ignored
        unsigned int result = a ^ b;
        cout << result << endl;
    }

    return 0;
}
