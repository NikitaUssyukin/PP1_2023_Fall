#include <iostream>

using namespace std;

int main() {

    string sentence;
    // cin >> sentence;
    getline(cin, sentence);

    int stringSize = sentence.size();

    // equivalent alternative for string.size()
    // int stringLength = sentence.length();

    int counter = 0;

    int position = sentence.find(' ');

    // method string.find() returns the constant 
    // string::npos when the element is NOT found
    while (position != string::npos) {
        counter++;
        position = sentence.find(' ', position + 1);
    }

    cout << ++counter << endl;

    return 0;
}