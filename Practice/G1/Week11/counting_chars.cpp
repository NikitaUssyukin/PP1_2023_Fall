// counting alphabetical symbols
#include <iostream>
#include <string>

using namespace std;

int main() {
    int a[26] = {};

    char b;

    while(cin >> b) {
        if(!isalpha(int(b))) {
            continue;
        }
        b = tolower(b);
        a[b - 97]++;
    }

    for(int i = 0; i < 26; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}