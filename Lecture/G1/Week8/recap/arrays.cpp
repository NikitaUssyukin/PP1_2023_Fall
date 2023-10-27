#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int a[] = {9, -1, 2};

    cout << a << endl;
    cout << *a << endl;

    *a = 7;
    a[0] = 7;

    cout << *a << endl;

    for(int i = 0; i < 3; i++) {
        cout << *(a + i) << " ";
        // cout << a[i] << endl;
    }
    cout << endl;

    sort(a, a + 3);

    for(int i = 0; i < 3; i++) {
        cout << *(a + i) << " ";
        // cout << a[i] << endl;
    }
    cout << endl;

    //max
    cout << a[2] << endl;

    //min
    cout << a[0] << endl;

    return 0;

}