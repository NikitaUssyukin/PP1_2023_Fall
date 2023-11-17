#include <iostream>

using namespace std;

int main() {
    pair<int, bool> p1 = make_pair(1, true);
    pair<string, double> p2 = make_pair("Value of Pi:", 3.14);

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;

    return 0;
}