#include <iostream>

using namespace std;

void transpose(int n, int m, int a[][100]) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

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

    transpose(n, m, a);

    return 0;
}