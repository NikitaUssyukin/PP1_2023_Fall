#include <iostream>

using namespace std;

int main() {
    pair<int, bool> p1;
    pair<string, double> p2;

    cin >> p1.first >> p1.second;
    cin >> p2.first >> p2.second;

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;

    return 0;
}