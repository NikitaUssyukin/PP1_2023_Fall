#include <iostream>

using namespace std;

int main() {

    string word;
    cin >> word;

    string reversedWord;

    for (int i = word.size() - 1; i >= 0; i--) {
        reversedWord += word.at(i);
    }

    if (word == reversedWord) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}