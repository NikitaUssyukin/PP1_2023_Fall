#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int maxI = 0;
    int maxJ = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > a[maxI][maxJ]) {
                maxI = i;
                maxJ = j;
            }
        }
    }

    cout << ++maxI << " " << ++maxJ << endl;

    return 0;
}