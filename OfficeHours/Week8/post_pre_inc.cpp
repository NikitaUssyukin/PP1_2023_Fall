#include <iostream>

using namespace std;

int main() {

    int a, b;
    a = 1;
    b = 1;

    // post-increment and pre-increment
    cout << a++ << " " << ++b << endl;
    cout << a << " " << b << endl;
    cout << a++ + ++b << endl;
    cout << a << " " << b << endl;
    
    return 0;

}