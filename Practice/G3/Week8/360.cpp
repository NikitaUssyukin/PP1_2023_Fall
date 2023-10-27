#include <iostream>
#include <climits>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int a[n][m];

    int max = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] > max) max = a[i][j];
        }
    }

    int counter = 0;

    int b[n];
    
    for(int i = 0; i < n; i++) {
        b[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (a[i][j] == max) {
                b[i] = 1;
                counter++;
                break;
            }
        }
    }

    cout << counter << endl;

    for(int i = 0; i < n; i++) {
        if(b[i] == 1) cout << i << endl;
    }

    return 0;

}