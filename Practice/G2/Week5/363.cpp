#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int a[n][m];

    int num = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0) a[i][j] = num++;
            else a[i][m - 1 - j] = num++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

