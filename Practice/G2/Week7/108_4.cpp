#include <iostream>

using namespace std;

int main() {

    string word;
    cin >> word;

    string reversedWord = string(word.rbegin(), word.rend());

    if (word == reversedWord) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}