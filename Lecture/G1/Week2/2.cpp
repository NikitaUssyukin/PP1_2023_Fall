#include <iostream>

using namespace std;

int main() {

    // this is a comment 

    // more types of binary operators
    // assignment: =, +=, -=, *=, /=, %=

    int a = 5;

    a = a + 55;
    a += 55;

    a -= 20;

    a *= 2;

    // bitwise |, &, ^, <<, >>, ~

    a = 5; // in binary 0101

    int b = 9; // 1001

    // 0101 | 1001 = 1101 (in decimal 13)
    cout << (a | b) << endl;

    // 0101 & 1001 = 0001 (in decimal 13)
    cout << (a & b) << endl;

    // 0101 << 1 = 1010 0000
    cout << (a<<1) << endl;

    // 1001 >> 1 = 0100
    cout << (b>>1) << endl;

    unsigned int c = a;

    //10000000000000000000000000000101
    cout << (~c) << endl;

    a = 0;

    cout << ~a << endl;

    // range of int = [-((2^31)-1) ; (2^31-1)]
    // range of unsigned int = [0 ; (2^32-1)]

    int d = 11;


    cout << ++d << endl;

    cout << d++ << endl;

    cout << d << endl;

    return 0;
}