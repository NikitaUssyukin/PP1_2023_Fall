#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    m.insert(make_pair("Apples", 5));
    m.insert(make_pair("Pineapples", 105));
    m.insert(make_pair("Pear", 1));

    cout << m["Apples"] << endl;

    map<string, int>::iterator it;

    for(it = m.begin(); it != m.end(); it++) {
        pair<string, int> p = *it;
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}