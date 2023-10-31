#include <iostream>

using namespace std;

int transpose(int n, int m, int a[][100]) {
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

int main() {

    int n, m;
    cin >> n >> m;
    
    int a[n][100];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << transpose(n, m, a);

    return 0;

}