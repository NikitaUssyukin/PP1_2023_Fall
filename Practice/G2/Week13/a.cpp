#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int a, b;

    a = 1;
    b = 2;

    cout << a + b << endl;

    a++;  
    ++b;

    cout << a << " " << b << endl;

    cout << a++ << " " << b++ << endl;

    cout << a + b << endl;

    cout << --a + b-- << endl;

    cout << a << " " << b << endl;
    
    return 0;
}