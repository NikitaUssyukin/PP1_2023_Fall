#include <iostream>

using namespace std;

int main() {

    string sentence;
    getline(cin, sentence);

    int counter = 0;
    int position = sentence.find(' ');

    while (position != string::npos) {
        sentence.replace(position, 1, "");
        counter++;
        position = sentence.find(' ');
    }

    cout << ++counter << endl;

    // cout << sentence << endl;

    return 0;
}