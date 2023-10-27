#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int a[] = {1, 3, 0, 9, 4};

    sort(a, (a + 5));
    reverse(a, a + 5);

    for(int i = 0; i < 5; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;

    int b[][3] = {
        {7, 2, 6},
        {1, 9, 5},
        {0, 3, 4}
    };

    cout << b << " " << *b << " " << **b << endl;
    cout << b << " " << *(b + 1) << " " << **(b + 1) << endl;
    cout << b << " " << *(b + 2) << " " << *(*(b + 2) + 1) << endl;

    sort(*b, *(b + 2) + 3);
    reverse(*b, *(b + 2) + 3);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << *(*(b + i) + j) << " ";
        }
        cout << endl;
    }
    cout << endl;

    reverse(*b, *(b + 1) + 3);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << *(*(b + i) + j) << " ";
        }
        cout << endl;
    }

    return 0;
}

