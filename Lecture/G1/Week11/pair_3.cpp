#include <iostream>

using namespace std;

int main() {
    pair<string, int> p[5];

    for(int i = 0; i < 5; i++) {
        cin >> p[i].first >> p[i].second;
    }

    for(int i = 0; i < 5; i++) {
        cout << p[i].first << " " << p[i].second << endl;
    }

    return 0;
}