#include <iostream>

using namespace std;

void changeArray(int a[][100], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            a[i][j] += rand() % 6 + 1;
        }
    }
}

int main() {

    int n, m;
    cin >> n >> m;

    int a[n][100];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            a[i][j] = rand() % 6 + 1;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    changeArray(a, n, m);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}