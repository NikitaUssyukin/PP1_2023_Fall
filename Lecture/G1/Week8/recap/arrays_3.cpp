#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int b[][3] = {
        {9, -1, 2},
        {0, 4, -3},
        {-7, 5, 6}
    };

    cout << b << " " << *(b + 1) << " " << **b << endl;

    cout << **(b + 1) << " " << *(*(b + 1) + 1) << endl;
    //      b[1][0]

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << *(*(b + i) + j) << " ";
            // cout << b[i][j] << " ";
        }
        cout << endl;
    }

    sort(*b, (*(b + 1) + 3));

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << *(*(b + i) + j) << " ";
            // cout << b[i][j] << " ";
        }
        cout << endl;
    }

    reverse(*b, (*(b + 1) + 3));

    return 0;

}