#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int a[][3] = {
        {4, -2, 9},
        {-1, 3, 8},
        {11, 0, 5}
    };

    sort(*a, *(a + 2) + 3);
    // sort(*a, *(a + n - 1) + m)
    // n - number of rows
    // m - number of columns

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}