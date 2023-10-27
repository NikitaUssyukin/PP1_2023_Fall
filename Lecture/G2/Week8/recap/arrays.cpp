#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int a[] = {9, -1 , 2, 5, 0, 7, -11};

    int n = 7;

    cout << a << a + 1 << a + n - 1 << endl;
    cout << *a << " " << *(a + 1) << " " << *(a + n - 1) << endl;

    *(a + 1) = -5;

    for(int i = 0; i < n; i++) {
        cout << *(a + i) << " ";
        // cout << a[i] << endl;
    }
    cout << endl;

    sort(a, a + n);

    for(int i = 0; i < n; i++) {
        cout << *(a + i) << " ";
        // cout << a[i] << endl;
    }
    cout << endl;

    reverse(a + 2, a + n - 1);
    // or
    reverse(a + 2, a + 6);

    for(int i = 0; i < n; i++) {
        cout << *(a + i) << " ";
        // cout << a[i] << endl;
    }
    cout << endl;

    return 0;
}