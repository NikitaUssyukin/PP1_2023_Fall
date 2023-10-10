#include <iostream>

using namespace std;

int main() {

    string s;
    cin >> s;

    string r = string(s.rbegin(), s.rend());

    cout << s << " " << r << endl;

    if (s == r) cout << "It's a palindrome!" << endl;
    else cout << "Not a palindrome!" << endl;

    return 0;
}