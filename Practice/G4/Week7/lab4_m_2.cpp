#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int a[n][n];

    int counter = 1;

    int x, y;

    // x = 0; // k = x;
    // y = n - 1; // n - 1 - k = y

    for(int k = 0; k <= (n - 1) / 2; k++) {

        for(int j = k; j <= n - 1 - k; j++) {
            a[k][j] = counter++;
        }

        for(int i = k + 1; i <= n - 1 - k; i++) {
            a[i][n - 1 - k] = counter++;
        }

        for(int j = n - 1 - k - 1; j >= k; j--) {
            a[n - 1 - k][j] = counter++;
        }

        for(int i = n - 1 - k - 1; i > k; i--) {
            a[i][k] = counter++;
        }

    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout.width(3);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}