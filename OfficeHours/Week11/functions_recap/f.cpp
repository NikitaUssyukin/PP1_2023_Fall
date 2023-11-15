#include <iostream>

using namespace std;

int calculateSum(int n, int m, int a[][100]) {
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            sum += a[i][j];
        }
    }
    return sum;
}

int main() {
    int n, m;
    
    cin >> n >> m;

    // second dimension should be equal to
    // the second dimension in the function
    // parameters
    int a[n][100];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << calculateSum(n, m, a) << endl;

    return 0;
}