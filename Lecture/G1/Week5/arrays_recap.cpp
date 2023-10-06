#include <iostream>
#include <climits>

using namespace std;

int main() {

    // coordinates

    // int a[10][10] = {}; // static array initialized with 0

    // for (int i = 0; i < 10; i++) {
    //     for (int j = 0; j < 10; j++) {
    //         // cout << a[i][j] << " ";
    //         cout << i << j << " ";
    //     }
    //     cout << endl;

    
    // return 0;

    // end coordinates



    // alternative diagonals solution

    // int n;
    // cin >> n;

    // int a[n][n];

    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         if (j > n - 1 - i){
    //             a[i][j] = 2;
    //         }
    //         else if (j == n - 1 - i){
    //             a[i][j] = 1;
    //         } 
    //         else {
    //             a[i][j] = 0;
    //         }
    //     }
    // }

    // for(int i = 0; i < n; ++i){
    //     for(int j = 0; j < n; ++j){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // return 0;

    // end alternative diagonals solution



    // alternative solution, by Nauryzbek

    // int n;

    // cin >> n;

    // int matrix[n][n];

    // for (int i = 0; i < n * n; ++i) {

    //     int row = i / n;
    //     int col = i % n;

    //     matrix[row][col] = 0;
    //     matrix[row][col] += (col >= n - row - 1);
    //     matrix[row][col] += (col > n - row - 1);

    // }

    // for (int i = 0; i < n; ++i) {

    //     for (int j = 0; j < n; ++j) {
    //         cout << matrix[i][j] << " ";
    //     }

    //     cout << "\n";
    // }

    // return 0;

    // end alternative solution

    

    // <climits> library example

    cout << INT_MIN << " " << INT_MAX << endl;
    
    return 0;

    // end example
}