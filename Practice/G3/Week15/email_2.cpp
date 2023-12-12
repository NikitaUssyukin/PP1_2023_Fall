#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// abc@xyz.com

bool isValid(string s) {
    string s1, s2, s3;

    istringstream iss(s);

    getline(iss, s1, '@');
    getline(iss, s2, '.');
    getline(iss, s3);

    if(s1.empty() || s2.empty() || s3.empty()) return false;

    for(int i = 0; i < s1.size(); ++i) {
        if(!isalpha(s1[i]) || !islower(s1[i])) return false;
    }

    for(int i = 0; i < s2.size(); ++i) {
        if(!isalpha(s2[i]) || !islower(s2[i])) return false;
    }

    for(int i = 0; i < s3.size(); ++i) {
        if(!isalpha(s3[i]) || !islower(s3[i])) return false;
    }

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
