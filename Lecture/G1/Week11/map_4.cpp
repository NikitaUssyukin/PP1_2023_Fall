#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string s;
        int num;
        cin >> s >> num;
        m.insert(make_pair(s, num));
    }

    map<string, int>::iterator it;
    // int i = 0;
    for(it = m.begin(); it != m.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
        cout << it -> first << " " << it -> second << endl;
        // !!! You can't use + or - operation directly on map iterator
        // You can only use increment(++) or decrement(--)
        // cout << *(it + i).first << " " << *(it + i).second << endl;
        // i++;
    }

    return 0;
}