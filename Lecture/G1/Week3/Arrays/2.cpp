#include <iostream>

using namespace std;

int main() {

    int e[] = {1, 2, 3, 4, 5, 6, 7};
    //index    0  1  2  3  4  5  6 
    // number of elements (n) = 7
    // the first element is 0, the last is n-1

    for (int i = 0; i < 7; i++) {
        cout << e[i] << endl;
    }

    for (int i = 1; i < 7; i = i + 2) {
        cout << e[i] << endl;
    }
    
    return 0;
}