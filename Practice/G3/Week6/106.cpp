#include <iostream>

using namespace std;

int main() {

    string sentence;
    getline(cin, sentence);
    // cin >> sentence;

    int counter = 0;

    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') counter++;
    }

    cout << ++counter << endl;

    return 0;
}