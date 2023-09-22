#include <iostream>

using namespace std;

int main() {

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // indexes     0  1  2  3  4  5  6  7

    cout << array + 8 << "\t" << array[8] << endl;

    cin >> array[8];

    return 0;
}