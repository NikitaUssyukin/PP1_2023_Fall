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

    bool b[n];
    
    for(int i = 0; i < n; i++) {
        b[i] = false;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (a[i][j] == max) {
                b[i] = true;
                counter++;
                break;
            }
        }
    }

    cout << counter << endl;

    for(int i = 0; i < n; i++) {
        if(b[i]) cout << i << endl;
    }

    return 0;

}