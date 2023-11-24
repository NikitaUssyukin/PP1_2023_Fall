#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countVowels(string s) {
    int count = 0;
    string vowels = "aeiuoyAEIUOY";
    for(int i = 0; i < s.size(); i++) {
        if(vowels.find(s.at(i)) != string::npos) 
            count++;
    }
    return count;
}

bool compareByVowels(string s1, string s2) {
    return countVowels(s1) < countVowels(s2);
}

int main() {
    vector<string> v(5);
    for(int i = 0; i < 5; i++) {
        // cin >> v[i];
        cin >> v.at(i);
    }
    sort(v.begin(), v.end(), compareByVowels);

    vector<string>::iterator it;
    for(it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}