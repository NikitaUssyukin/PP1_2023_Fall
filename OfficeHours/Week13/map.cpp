#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    m["Tiger"] = 5;
    m.insert(make_pair("Elephant", 3));

    string s;
    int a;
    cin >> s >> a;
    m[s] = a;

    cin >> s >> a;
    m.insert(make_pair(s, a));

    pair<string, int> p1;
    cin >> p1.first >> p1.second;
    m.insert(p1);

    cout << m["Tiger"] << endl;
    cout << m["Elephant"] << endl;

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
        // cout << (*it).first << " " << (*it).second << endl;

        // pair<string, int> p;
        // p = *it;
        // cout << p.first << " " << p.second << endl;
    }

    return 0;
}