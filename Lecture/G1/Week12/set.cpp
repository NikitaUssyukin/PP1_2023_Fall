#include <iostream>
#include <set>

using namespace std;

int main() {
    set<string> s;
    for(int i = 0; i < 5; i++) {
        string temp;
        cin >> temp;
        s.insert(temp);
    }

    set<string>::iterator it;
    // int i = 0;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
        // !!! You can't use + or - operation directly on set iterator
        // You can only use increment(++) or decrement(--)
        // cout << *(it + i) << " ";
        // i++;
    }
    cout << endl;

    return 0;
}