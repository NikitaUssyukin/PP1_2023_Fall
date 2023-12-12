#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<pair<pair<string, int>, pair<string, int> >, int> m;
    // map<key_type, value_type> m;
    // pair<first_value_type, second_value_type> p;

    int n;
    cin >> n;

    /*
    2
    Assyl 40 Azamat 40
    Assyl 40 Azamat 50
    */

    for(int i = 0; i < n; ++i) {
        pair<string, int> p1, p2;
        cin >> p1.first >> p1.second >> p2.first >> p2.second;
        m[make_pair(p1, p2)]++;
    }

    map<pair<pair<string, int>, pair<string, int> >, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first.first.first << " and " << it->first.second.first;
        cout << " " << it->first.first.second + it->first.second.second << endl;
    }

    return 0;
}