#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int a[][3] = {
        {9, -1, 2}, 
        {5, 0, 7}, 
        {6, 3, -11}
        };

    int n = 3;
    int m = 3;

    // sort(first, last);

    cout << a << " " << *a << " " << **a << endl;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << *(*(a + i) + j)  << " ";
            // cout << a[i][j] << endl;
        }
        cout << endl;
    }
    cout << endl;

    // reverse array elements from the 2nd element
    // of the first row to the last element of the 
    // second row (inclusively)
    reverse(*a + 1, *(a+1) + 3);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << *(*(a + i) + j)  << " ";
            // cout << a[i][j] << endl;
        }
        cout << endl;
    }
    cout << endl;

    sort(*a, *(a + n - 1) + m);
    reverse(*a, *(a + n - 1) + m);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << *(*(a + i) + j)  << " ";
            // cout << a[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}