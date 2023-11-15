#include <iostream>
#include <string>

using namespace std;

bool stringCheck(string s, int i) {
    if(i >= s.size()) return true;
    if(s.at(i) == '1' && s.at(i - 1) == '1') return false;
    return stringCheck(s, i + 1);
}

int main() {
    string s;
    cin >> s;

    if(stringCheck(s, 1)) cout << "No 2 consecutive 1's\n";
    else cout << "2 consecutive 1's exist\n";

    // 0120121012012012111
    // 01201210111201201211
    // 01201210120120121

    return 0;
}