#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, map<int, int> > m;

    int n = 0;
    for(int i = 1; i <= 10; ++i) {
        for(int j = 1; j <= 10; ++j) {
            m[i][j] = ++n;
        }
    }

    map<int, map<int, int> >::iterator it1;

    return 0;
}