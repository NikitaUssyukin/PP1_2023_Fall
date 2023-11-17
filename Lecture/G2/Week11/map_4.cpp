#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    m.insert(make_pair("Apples", 5));
    m.insert(make_pair("Pineapples", 105));
    m.insert(make_pair("Pear", 1));

    map<string, int>::iterator it;

    if(m.find("Pineapples") != m.end()) {
        it = m.find("Pineapples");
        cout << (*it).second << endl;
    }
    
    
    return 0;
}