#include <iostream>
#include <string>

using namespace std;

bool stringCheck(string s) {
    if(s.size() <= 1) return true;
    // cout << s.at(1) << " " << s.at(0) << endl;
    if(s.at(1) == '1' && s.at(0) == '1') return false;
    // s.erase(0, 1);
    s.erase(s.begin());
    return stringCheck(s);
}

int main() {
    string s;
    cin >> s;

    if(stringCheck(s)) cout << "No 2 consecutive 1's\n";
    else cout << "2 consecutive 1's exist\n";

    // 0120121012012012111
    // 01201210111201201211
    // 01201210120120121

    return 0;
}