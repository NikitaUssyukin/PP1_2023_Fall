#include <iostream>

using namespace std;

int main() {
    pair<string, int> p[5];

    for(int i = 0; i < 5; i++) {
        string s;
        int n;
        cin >> s >> n;

        p[i] = make_pair(s, n); 
    }

    for(int i = 0; i < 5; i++) {
        cout << p[i].first << " " << p[i].second << endl;
    }


    return 0;
}