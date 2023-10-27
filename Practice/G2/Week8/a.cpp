#include <iostream>

using namespace std;

int main() {

    
    int a[3][3] = {
        {9, 1, 2},
        {3, 11, 5},
        {6, 0, 8}
    };

    int b[3] = {0, 1, 2};

    cout << *(*(a + 2) + 1) << endl;
    cout << *b << endl;

    sort(*a, (*(a + 2) + 3));

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}