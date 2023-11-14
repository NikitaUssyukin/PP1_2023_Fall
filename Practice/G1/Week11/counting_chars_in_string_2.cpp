// counting alphabetical symbols
#include <iostream>
#include <string>

using namespace std;

int main() {
    int a[26] = {};

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(!isalpha(int(s.at(i)))) {
            continue;
        }
        s.at(i) = tolower(s.at(i));
        a[s.at(i) - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        if(a[i] == 0) continue;
        cout << char(i + 'a') << " " << a[i] << endl;
    }
    cout << endl;

    return 0;
}