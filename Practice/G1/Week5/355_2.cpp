#include <iostream>

using namespace std;

int main() {

    int n;

    // input
    cin >> n;

    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }

    // checking for symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    
    // output
    cout << "yes" << endl;

    return 0;
}