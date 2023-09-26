#include <iostream>

using namespace std;

int main() {

    int a = 0;

    // a++, ++a == a = a + 1

    //post-increment and pre-increment
    cout << a++ << " " << ++a << endl;

    cout << (a++) + (++a) << endl;

    return 0;
}