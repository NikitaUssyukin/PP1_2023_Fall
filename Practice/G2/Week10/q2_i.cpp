#include <iostream>

using namespace std;

int main() {

    int w, h;
    cin >> w >> h;

    int a[h][w];

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            a[i][j] = 0;
        }
    }

    int n;
    cin >> n;

    int x1, y1, x2, y2;

    for(int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = x1; i < x2; i++) {
            for(int j = y1; j < y2; j++) {
                a[i][j] = 1;
            }
        }
    }

    int sum = 0;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            sum += a[i][j];
            // cout << a[i][j] << " ";
        }
        // cout << endl;
    }

    cout << w * h - sum << endl;

    return 0;
}