#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    sort(*a, *a + n * m);

    int b_m;
    if(m % 2 == 1) b_m = m - 1;
    else b_m = m;

    int b[n][b_m];

    /*
    Input
    3 4
    0 1 2 3
    4 5 6 7
    8 9 10 11
    
    Output
    11 0 10 1 
    9 2 8 3 
    7 4 6 5 
    */

    int start_i = 0, start_j = 0, end_i = n - 1, end_j = m - 1;    

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < b_m; j++) {
            if(j % 2 == 0) b[i][j] = a[end_i][end_j--];
            else b[i][j] = a[start_i][start_j++];
            if(end_j < 0) {
                end_j = m - 1;
                end_i--;
            }
            if(start_j >= m) {
                start_j = 0;
                start_i++;
            }
        }

    }

    // b[0][0] = a[n - 1][m - 1];
    // b[0][1] = a[0][0];
    // b[0][2] = a[n - 1][m - 2];
    // b[0][3] = a[0][1];

    // b[1][0] = a[n - 1][m - 3];
    // b[1][1] = a[0][2];
    // b[1][2] = a[n - 1][m - 4];
    // b[1][3] = a[0][3];

    // b[2][0] = a[n - 2][m - 1];
    // b[2][1] = a[1][0];
    // b[2][2] = a[n - 2][m - 2];
    // b[2][3] = a[1][1];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < b_m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// 100 1 100 1 100 1 100 1 100 1 100 1 100 1 100 1 99 1 99 1 99 1 99 2 99 2 99 2 99 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 97 2 97 3 97 3 97 3 97 3 97 3 97 3 97 3 97 3 97 3 97 
// 100 1 100 1 100 1 100 1 100 1 100 1 100 1 100 1 99 1 99 1 99 1 99 2 99 2 99 2 99 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 98 2 97 2 97 3 97 3 97 3 97 3 97 3 97 3 97 3 97 3 97 3 