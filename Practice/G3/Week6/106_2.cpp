#include <iostream>

using namespace std;

int main() {

    string sentence;
    getline(cin, sentence);

    int counter = 0;
    int position = sentence.find(' ');

    while (position != string::npos) {
        counter++;
        sentence.replace(position, 1, "");
        position = sentence.find(' ');
    }

    cout << sentence << endl;

    cout << ++counter << endl;

    return 0;
}