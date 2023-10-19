#include <iostream>

using namespace std;

int main() {

    string word;
    cin >> word;

    for (int i = 0; i < word.size() / 2; i++) {
        if (word[i] == word[word.size() - 1 - i]) {
            continue;
        } else {
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;

    return 0;
}