#include <iostream>

using namespace std;

int main() {

    int x, y, z;
    cin >> x >> y >> z;

    if(y + x > z && x + z > y && y + z > x) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}