#include <iostream>

using namespace std;

int main() {
    pair<int, bool> p1;
    pair<string, double> p2;

    int n;
    bool b;
    cin >> n >> b;
    p1 = make_pair(n, b);
   
    string s;
    double d;
    cin >> s >> d;
    p2 = make_pair(s, d);

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;

    return 0;
}