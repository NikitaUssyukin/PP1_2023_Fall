#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int a[] = {9, -1, 2, 6, 11, 75, -23, 8, 0, 1};

    int b[][3] = {
        {9, -1, 2},
        {0, 4, -3},
        {-7, 5, 6}
    };

    for(int i = 0; i < 10; i++) {
        cout << *(a + i) << " ";
        // cout << a[i] << endl;
    }
    cout << endl;

    // from 3rd element up to 7th element
    reverse(a + 2, a + 7);

    for(int i = 0; i < 10; i++) {
        cout << *(a + i) << " ";
        // cout << a[i] << endl;
    }
    cout << endl;

    int c, d;
    c = 6;
    d = 7;

    swap(c, d);

    cout << c << " " << d << endl;

    return 0;

}