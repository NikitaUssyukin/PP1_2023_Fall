#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int array[] = {11, 2, 403, -10, 9, 6, 44, 8};

    sort(array, array+8);

    reverse(array, array+8);

    for (int i = 0; i < 8; i++) {
        cout << array[i] << endl;
    }

    return 0;
}