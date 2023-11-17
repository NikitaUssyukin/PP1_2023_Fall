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
        cout << (*it).first << " " << (*it).second << endl;
    }
    
    return 0;
}