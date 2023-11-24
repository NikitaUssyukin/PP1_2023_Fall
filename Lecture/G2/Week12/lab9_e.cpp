#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(m.find(s) == m.end()) m[s] = 1;
        else m[s]++;
        // m[s]++; - !!! this also works, but might give undefined behaviour
    }

    // string s;
    // cin >> s;
    // m[s]++;

    map<string, int>::iterator it;
    int counter = 0;
    for(it = m.begin(); it != m.end(); it++) {
        if((*it).second == 3) counter++;
    }

    cout << counter << endl;

    return 0;
}