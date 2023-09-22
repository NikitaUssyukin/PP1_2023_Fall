#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    a = 1;
    b = 2;
    c = 3;

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // indexes     0  1  2  3  4  5  6  7

    array[3] = 100;

    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;
    cout << array[4] << endl;
    cout << array[5] << endl;
    cout << array[6] << endl;
    cout << array[7] << endl;

    cout << "for loop" << endl;

    for (int i = 0; i < 8; i = i + 1) {
        cout << array[i] << endl;
    }

    for (int i = 0; i < 8; i = i + 1) {
        cin >> array[i];
    }

    for (int i = 0; i < 8; i = i + 1) {
        cout << array[i] << endl;
    }

    return 0;
}