#include <iostream>

using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    int a[n][m+1];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> a[i][j];
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
        a[i][m] = sum;
    }

    int max = a[0][m];
    int indexOfMax = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i][m] > max) {
            max = a[i][m];
            indexOfMax = i;
        }
    }

    cout << max << endl << indexOfMax << endl;
    
    return 0;
}