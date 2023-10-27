#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int a[3] = {3, 8, 1};

    int b[3][3] = {
        {3, 7, 4},
        {2, 1, 8},
        {9, 5, 6}
    };

    cout << "1D array using subcript operator:\n";
    for(int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "1D array using dereference (indirection) operator:\n";
    for(int i = 0; i < 3; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl << endl;

    reverse(*b, *(b + 2) + 3);

    cout << "2D array using subcript operator:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    cout << "2D array using dereference (indirection) operator:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << *(*(b + i) + j) << " ";
        }
        cout << endl;
    }

    return 0;
}