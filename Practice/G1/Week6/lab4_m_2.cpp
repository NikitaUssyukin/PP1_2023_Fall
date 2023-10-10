// not solved yet
#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n][n];

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         a[i][j] = 0;
    //     }
    // }

    int frame = 0;

    int counter = 1;

    while (frame <= n - 1 - frame) {

        for (int j = frame; j < n - frame; j++) {
            a[frame][j] = counter++;
        }

        for (int i = frame + 1; i < n - frame ; i++) {
            a[i][n - 1 - frame] = counter++;
        }

        for (int j = n - 1 - frame; j >= frame; j--) {
            a[n - 1 - frame][j] = counter++;
        }

        for (int i = n - 1 - frame; i > frame; i--) {
            a[i][frame] = counter++;
        }

        frame++;
    }

    // cout << counter << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}