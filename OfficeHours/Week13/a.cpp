#include <iostream>
#include <string>

using namespace std;

int main() {
    string s("Today is a beatiful day!");

    cout << s.find("nigth") << endl;
    cout << string::npos << endl;
    cout << (s.find("nigth") == string::npos) << endl;

    return 0;
}