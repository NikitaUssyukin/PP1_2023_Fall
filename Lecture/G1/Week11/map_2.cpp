#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    m["Apples"] = 7;
    m["Oranges"] = 3;
    m["Pears"] = 4;
    m["Bananas"] = 9;
    m["Pineapples"] = 1;

    map<string, int>::iterator it;

    for(it = m.begin(); it != m.end(); it++) {
        pair<string, int> p = *it;
        cout << p.first << " " << p.second << endl;
    }

    /*
    Apples 7
    Oranges 3
    Pears 4
    Bananas 9
    Pineapples 1
    */

    return 0;
}