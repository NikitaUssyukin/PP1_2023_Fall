#include <iostream>

using namespace std;

int arraySum(int n, int m) {
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

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

    cout << arraySum(n, m) << endl;

    return 0;
}