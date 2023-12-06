#include <iostream>

using namespace std;

int main() {
    int a, b;
    a = 1;
    b = 1;

    cout << (a++) + (b++) << endl; // post-increment
    cout << a << " " << b << endl; // 2 2
    cout << (++a) + (++b) << endl; // pre-increment
    cout << a << " " << b << endl; // 3 3
    cout << (a++) + (++b) << endl; 

    return 0;

}