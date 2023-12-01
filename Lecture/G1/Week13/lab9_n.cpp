#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    cout << (a ^ b) << endl;
    
    /*
    0 0 | 0
    0 1 | 1
    1 0 | 1
    1 1 | 0
    */

    return 0;
}