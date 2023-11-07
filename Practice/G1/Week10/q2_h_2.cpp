#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int a[n * m];

    for(int i = 0; i < n * m; i++) {
        cin >> a[i];
    }

    sort(a, a + n * m);

    int b_m;
    if(m % 2 == 1) b_m = m - 1;
    else b_m = m;

    int b[n][b_m];

    // Example:
    // b[0][0] = a[n * m - 1];
    // b[0][1] = a[0];
    // b[0][2] = a[n * m - 2];
    // b[0][3] = a[1];

    // b[1][0] = a[n * m - 3];
    // b[1][1] = a[2];
    // b[1][2] = a[n * m - 4];
    // b[1][3] = a[3];

    // b[2][0] = a[n * m - 5];
    // b[2][1] = a[4];

    int start = 0, end = n * m - 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < b_m; j++) {
            if(j % 2 == 0) {
                b[i][j] = a[end--];
            }
            else {
                b[i][j] = a[start++];
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < b_m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// 100 1 100 1 100 1 100 1 100 1 100 1 100 1 100 1 99 1 99 1 99 1 99 2 99 2 99 2 99 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 97 2 97 3 97 3 97 3 97 3 97 3 97 3 97 3 97 3 97 3 97
// 100 1 100 1 100 1 100 1 100 1 100 1 100 1 100 1 99 1 99 1 99 1 99 2 99 2 99 2 99 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 97 2 97 3 97 3 97 3 97 3 97 3 97 3 97 3 97 3 97 3 