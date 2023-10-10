#include <iostream>

using namespace std;

int main() {

    string sentence;
    getline(cin, sentence);

    int counter = 0;
    int position = sentence.find(' ');

    while (position != string::npos) {
        counter++;
        position = sentence.find(' ', position + 1);
    }

    cout << ++counter << endl;

    // cout << sentence << endl;

    return 0;
}