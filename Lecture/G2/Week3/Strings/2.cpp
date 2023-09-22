#include <iostream>

using namespace std;

int main() {

    string arrayOfStrings[2];

    getline(cin, arrayOfStrings[0]);
    getline(cin, arrayOfStrings[1]);

    for (int i = 0; i < 2; i++) {
        cout << arrayOfStrings[i] << endl;
    }

    return 0;
}