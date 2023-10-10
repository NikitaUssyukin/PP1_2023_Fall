#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n][n];

    int counter = 1;

    int x, y;
    x = 0;
    y = n - 1;

    while (x <= y) {
        
        // first row
        for (int j = x; j <= y; j++) {
            a[x][j] = counter++;
        }

        // last column
        for (int i = x + 1; i <= y; i++) {
            a[i][y] = counter++;
        }

        // last row
        for (int j = y - 1; j >= x; j--) {
            a[y][j] = counter++;
        }

        // first column
        for (int i = y - 1; i > x; i--) {
            a[i][x] = counter++;
        }

        x++;
        y--;
    }

    // outputting matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}