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