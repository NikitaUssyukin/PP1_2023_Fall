#include <iostream>

using namespace std;

int main() {

    string word;
    cin >> word;

    while(word.size() > 1) {
        if (word.front() == word.back()) {
            word.erase(0, 1);
            word.erase(word.size() - 1, 1);
            // cout << word << endl;
            continue;
        } else {
            cout << "no" << endl;
            return 0;
        }
    }

    // cout << word << endl;

    cout << "yes" << endl;

    return 0;
}