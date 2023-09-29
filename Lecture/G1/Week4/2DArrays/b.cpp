#include <iostream>

using namespace std;

int main() {

    int a[3][3] = {
        {1, 2, 3}, // 0
        {4, 5, 6}, // 1
        {7, 8, 9}  // 2
    };
//       0  1  2

    cout << a << endl;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) cout << i << j << " ";
        cout << endl;
    }

    return 0;
}