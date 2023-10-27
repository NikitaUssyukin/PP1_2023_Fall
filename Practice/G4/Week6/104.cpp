#include <iostream>

using namespace std;

int main() {

    char c;
    cin >> c;
    if ('a' <= c && c <= 'z') {
        cout << char(c - ('a' - 'A')) << endl;
    } else if ('A' <= c && c <= 'Z') {
        cout << char(c + ('a' - 'A')) << endl;
    } else cout << c << endl;

    return 0;
}