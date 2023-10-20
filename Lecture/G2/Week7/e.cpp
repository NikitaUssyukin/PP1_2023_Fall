#include <iostream>

using namespace std;

int arraySum(int n, int m, int a[][100]) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
            a[i][j] = 0;
        }
    }
    return sum;
}

int main() {

    int n, m;
    cin >> n >> m;

    int a[n][100];

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << arraySum(n, m, a) << endl;

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}