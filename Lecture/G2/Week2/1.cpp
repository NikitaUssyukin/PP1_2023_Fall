#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // main types of operators
    // unary 
    // ++, --

    int a = 5;

    cout << ++a << endl;

    cout << --a << endl;

    // binary
    // arithmetic: +, -, *, /, %

    cout << 15 % 6 << endl;

    // relational: ==, !=, <, <=, >, >=

    cout << ('a' > 'A') << endl;

    char b = 'a', c = 'A';

    cout << int(b) << " " << int(c) << endl;

    // asignment: =, +=, -=, *=, /=, %=

    int d = 11;

    d = d + 5;

    cout << d << endl;

    d %= 5;

    cout << d << endl;

    // bitwise: &, |, ~, ^, <<, >>
    
    d = 5; //0101
    int e = 7; //0111

    //0101 & 0111 = 0101 
    cout << (d & e) << endl;

    //0101 | 0111 = 0111
    cout << (d | e) << endl; 

    //0101 | 0111 = 0010
    cout << (d ^ e) << endl;

    //~0101 = 1010
    unsigned int f = d;
    cout << ~f << endl;

    // ~00000000000000000000000000000101 = 
    // = 11111111111111111111111111111010
    // -1 (decimal) = 11111111111111111111111111111111 (binary)

    d = 0;

    cout << ~d << endl;

    // masking:
    // 10000100000010001001001000000101 & 00000000000000000000000000001111 = 
    // = 00000000000000000000000000000101
    
    d = -2147483648; // the smallest number usigned int can hold
    // in binary it is 10000000000000000000000000000000

    // int is 32 bits, 1 bit is reserved for the sign
    // the range of int is [-(2^31-1) ; (2^31-1)]

    // for the usigned int the range is [0 ; (2^32-1)]

    // 0001 >> 1 = 0000
    cout << (d>>1) << endl;

    // 0001 << 1 = 0010
    cout << (d<<1) << endl;

    cout << pow(2, 30) << endl;

    // ternary

}