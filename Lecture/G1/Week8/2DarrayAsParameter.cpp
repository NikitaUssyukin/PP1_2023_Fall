#include <iostream>
#include <algorithm>

using namespace std;

int maxElement(int n, int m, int a[][100]) {
    int max = a[0][0];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] > max) max = a[i][j];
        }
    }

    // sort(*a, (*(a + n - 1) + m - 1));
    // cout << **a << " " << *(*(a + n - 1) + m - 1) << endl;
    // return *(*(a + n - 1) + m - 1);
    return max;
}

int main() {

    int n, m;

    freopen("input.txt", "r", stdin);

    cin >> n >> m;

    int a[n][100];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << maxElement(n, m, a) << endl;

    return 0;
}
