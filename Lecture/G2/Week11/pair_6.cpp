#include <iostream>
#include <algorithm>

using namespace std;

int countVowels(string s) {
    int count = 0;
    string vowels = "aeiouyAEIOUY";
    for(int i = 0; i < s.size(); i++) {
        if(vowels.find(s.at(i)) != string::npos) {
            count++;
        }
    }
    return count;
}

bool compareNumOfVowels(string s1, string s2) {
    if(countVowels(s1) < countVowels(s2)) return true;
    return false; 
}

int main() {
    // pair<string, string> p[5];
    string p[5];

    for(int i = 0; i < 5; i++) {
        // string x, y; 
        // cin >> x >> y;
        // p[i] = make_pair(x, y);
        cin >> p[i];
    }

    sort(p, p + 5, compareNumOfVowels);

    for(int i = 0; i < 5; i++) {
        // cout << p[i].first << " " << p[i].second << endl;
        cout << p[i] << " ";
    }

    return 0;
}