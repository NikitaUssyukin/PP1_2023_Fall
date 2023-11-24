#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 5;
    pair<string, int> p[n];

    for(int i = 0; i < n; i++) {
        string s;
        int x;
        cin >> s >> x;

        p[i] = make_pair(s, x); 
    }

    sort(p, p + n);

    for(int i = 0; i < n; i++) {
        cout << p[i].first << " " << p[i].second << endl;
    }


    return 0;
}