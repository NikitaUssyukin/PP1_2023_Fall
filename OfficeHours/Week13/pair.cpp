#include <iostream>
#include <map>

using namespace std;

int main() {
    pair<string, int> p1;
    p1.first = "Tiger";
    p1.second = 5;

    pair<string, int> p2;
    p2 = make_pair("Elephant", 3);

    pair<string, int> p3;
    string s;
    int a;
    cin >> s >> a;
    p3 = make_pair(s, a);

    pair<string, int> p4;
    cin >> p4.first >> p4.second;

    return 0;
}