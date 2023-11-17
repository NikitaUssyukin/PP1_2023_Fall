#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    m["Apples"] = 5;
    m["Pineapples"] = 100;
    m["Pear"] = 1;

    cout << m["Apples"] << endl;

    map<string, int>::iterator it;

    for(it = m.begin(); it != m.end(); it++) {
        pair<string, int> p = *it;
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}