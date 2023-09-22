#include <iostream>
#include <array>

using namespace std;

int main() {

    int array[] = {11, 2, 403, -10, 9, 6, 44, 8};


    int sizeOfArray = sizeof(array)/4; // int is 4 bytes

    cout << sizeOfArray << endl;

    sizeOfArray = sizeof(array)/sizeof(1);

    cout << sizeOfArray << endl;

    string str;

    cout << sizeof(str) << endl;

    // for (int i = 0; i < 8; i++) {
    //     cout << array[i] << endl;
    // }

    return 0;
}