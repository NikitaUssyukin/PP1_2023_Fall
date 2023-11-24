#include <iostream>
#include <string>

using namespace std;

void checkSubstrs() {

}

int main() {
    //()(())
    //input format:
    // number of substrings n
    // n lines with n substrings
    // string s to search substrings in
    
    //output format:
    //if the substring is found in the string, output true
    //otherwise false
    //separated by new line

    //example:
    //input:
    //3
    //abc
    //bcd
    //fd
    //abcdef

    //output:
    //1
    //1
    //0

    int n;
    cin >> n;

    string substrs[n];

    for(int i = 0; i < n; i++) {
        cin >> substrs[i];
    }

    string s;
    cin >> s;
    int count = 0;
    unsigned long pos = 0;

    cout << s.find("bcd", pos) << endl;

    for(int i = 0; i < n; i++) {
        // cout << s << " ";
        // cout << substrs[i] << " ";
        string substr = substrs[i];
        pos = s.find(substr, pos);
        // cout << pos << " ";
        while(pos != string::npos) {
            count++;
            pos = s.find(substrs[i], pos);
        } 
        cout << count << endl;
        pos = 0;
        count = 0;
    }

    return 0;
}