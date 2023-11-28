#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    // map - associative container
    // each element consists of 2 parts - key and value
    // all keys are unique
    // all elements are automatically sorted by their keys

    map<string, int> m;

    m["Tiger"] = 5;
    m.insert(make_pair("Lion", 3));

    string a;
    int b;

    cin >> a >> b;
    m[a] = b;

    cin >> a >> b;
    m.insert(make_pair(a, b));

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++) {
        // cout << it->first << " " << it->second << endl;
        cout << (*it).first << " " << (*it).second << endl;
    }

    cout << m["Tiger"] << endl;

    map<string, int>::iterator it_begin = m.begin();

    it_begin++;

    cout << (++it_begin)->first << " " << (it_begin)->second << endl;

    map<string, int>::iterator it_find;
    it_find = m.find("Lion");
    pair<string, int> p;
    p = *it_find;
    cout << p.first << " " << p.second << endl;

    it_find = m.find("Zebra");

    if(it_find == m.end()) cout << "Animal not found!" << endl;
    else cout << it_find->first << " " << it_find->second << endl;

    it_find = m.find("Tiger");

    if(it_find == m.end()) cout << "Animal not found!" << endl;
    else cout << it_find->first << " " << it_find->second << endl;

    return 0;
}