#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    m["Apple"] = 7;
    m["Oranges"] = 3;
    m["Pears"] = 4;
    m["Bananas"] = 9;
    m["Pineapple"] = 1;

    map<string, int>::iterator it;

    for(it = m.begin(); it != m.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
        cout << it -> first << " " << it -> second << endl;
    }

    /*
    Apple 7
    Oranges 3
    Pears 4
    Bananas 9
    Pineapple 1
    */

    return 0;
}