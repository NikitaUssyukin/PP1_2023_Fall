#include <iostream>

using namespace std;

int main() {

    // '1';
    // 'A';
    // 'a';
    // ' ';

    cout << char(49) << endl;
    cout << char(65) << endl;
    cout << char(97) << endl;

    for (int i = 0; i < 200; i++) {
        cout << "ASCII code: " << i << " Symbol: " << char(i) << endl;
    }

    return 0;
}