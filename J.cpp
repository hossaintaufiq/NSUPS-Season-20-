#include <iostream>
using namespace std;

string timeConversion(string s) {
    int hours = stoi(s.substr(0, 2));
    int minutes = stoi(s.substr(3, 2));
    int seconds = stoi(s.substr(6, 2));
    string period = s.substr(8, 2);

    if (period == "PM" && hours != 12) {
        hours += 12;
    } else if (period == "AM" && hours == 12) {
        hours = 0;
    }

    return (hours < 10 ? "0" + to_string(hours) : to_string(hours)) + ":" +
           (minutes < 10 ? "0" + to_string(minutes) : to_string(minutes)) + ":" +
           (seconds < 10 ? "0" + to_string(seconds) : to_string(seconds));
}

int main() {
    string s;
    cin >> s;

    string result = timeConversion(s);
    cout << result << endl;

    return 0;
}