#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, map<int, int> > m;

    int x = 0;
    for(int i = 0; i <= 10; ++i) {
        for(int j = 0; j <= 10; ++j) {
            m[i][j]++;
        }
    }

    map<int, map<int, int> >::iterator it1;
    for(it1 = m.begin(); it1 != m.end(); ++it1) {
        cout << it1->first << " - ";
        map<int, int>::iterator it2;
        for(it2 = it1->second.begin(); it2 != it1->second.end(); ++it2) {
            cout << it2->first << ", " << it2->second << "; ";
        }
        cout << endl;
    }

    return 0;
}