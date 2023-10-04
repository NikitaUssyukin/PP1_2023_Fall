#include <iostream>

using namespace std;

int main() {

    int n;

    // input
    cin >> n;

    int a[n][n];
    bool arrayIsSymmetrical = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }

    // checking for symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                cout << "no" << endl;
                arrayIsSymmetrical = false;
                break;
                
                // return 0;
            }
        }
        if (!arrayIsSymmetrical) break;
    }
    
    // output
    if (arrayIsSymmetrical) cout << "yes" << endl;

    return 0;
}