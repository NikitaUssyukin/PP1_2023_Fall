#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n][n];

    int counter = 1;

    int x = 0;
    int y = n - 1; 

    while(x <= y) {

        for(int j = x; j <= y; j++) {
            int i = x;
            a[i][j] = counter++;
        }

        for(int i = x + 1; i <= y; i++) {
            int j = y;
            a[i][j] = counter++;
        }

        for(int j = y - 1; j >= x; j--) {
            int i = y;
            a[i][j] = counter++;
        }

        for(int i = y - 1; i > x; i--) {
            int j = x;
            a[i][j] = counter++;
        }

        x++;
        y--;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // cout.width(2);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}