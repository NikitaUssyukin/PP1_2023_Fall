#include <iostream>

using namespace std;

void transpose(int n, int m, int a[][1000]) {
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int n, m;
    cin >> n >> m;

    int a[n][1000];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    transpose(n, m, a);

    return 0;

}