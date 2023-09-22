#include <iostream>

using namespace std;

int main() {

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int sizeOfArray = sizeof(a)/4;

    cout << sizeOfArray << endl;
    // sizeof gives the size of the variable (array, char, etc)

    cout << a[sizeOfArray-1] << endl;

    // for (int i = 0; i < )

    return 0;
}