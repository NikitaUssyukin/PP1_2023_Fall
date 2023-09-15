#include <iostream>

using namespace std;

int main() {

    int a;

    a = 1;

    // unary
    a++; 

    cout << a << endl;

    a--;

    cout << a << endl;

    // binary
    // +, -, *, /, % - arithmetic
    // ==, !=, >, >=, <, <= - relational
    // &&, ||, !
    int b, c;

    b = 15;
    c = 6;

    cout << b % c << endl;

    cout << !((b > c) && (b < c)) << endl;

    

    // ternary
    // ?:

    
    return 0;
}