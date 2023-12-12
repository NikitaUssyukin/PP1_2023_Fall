#include <iostream>
#include <string>

using namespace std;

// abc@xyz.com

bool isValid(string s1) {
    string s2;

    if(s1[0] == '@') return false;

    unsigned long pos1 = s1.find('@');
    s2 += s1.substr(0, pos1);

    for(int i = 0; i < s2.size(); ++i) {
        if(!islower(s2[i])) return false;
    }

    s2 += '@';

    unsigned long pos2 = s1.find('.');

    if(pos2 - pos1 <= 1) return false;

    s2 += s1.substr(pos1 + 1, pos2 - pos1 - 1);

    for(int i = pos1 + 1; i < s2.size(); ++i) {
        if(!islower(s2[i])) return false;
    }

    s2 += '.';

    if(s1.size() == s2.size()) return false;

    s2 += s1.substr(pos2 + 1);

    for(int i = pos2 + 1; i < s2.size(); ++i) {
        if(!islower(s2[i])) return false;
    }

    // cout << s1 << " " << s2 << endl;

    if(s1 != s2) return false;
    return true;
}  



int main() {
    string s;

    cin >> s;

    if(isValid(s)) {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

    return 0;
}
