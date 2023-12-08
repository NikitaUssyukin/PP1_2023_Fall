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

    cout << m["Apples"] << endl;
    cout << m["Pears"] << endl;
    cout << m["Pineapples"] << endl;

    map<string, int>::iterator it;

    for(it = m.begin(); it != m.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
        cout << it -> first << " " << it -> second << endl;
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