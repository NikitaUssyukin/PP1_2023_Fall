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

    for(int i = 0; i < stringSize; i++) {
        if (sentence.at(i) == ' ') { 
            counter++;
        } 
    } 

    cout << ++counter << endl;

    return 0;
}