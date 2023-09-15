#include <iostream>

using namespace std;

int main() {

    int n = 1;

    while (n < 6) {
        cout << "This is our line number " << n << endl;
        n++;
    }

    n = 1;

    do {
        cout << "This is our line number " << n << endl;
        n++;
    } while (n < 6);

    n = 10;

    for (int i = 0; i > n; i++) {
        cout << "This is our for loop, iteration number " << i+1 << endl;
    }

    char a = 'a';

    // first goes the character, then its ASCII code
    // int(a) is type casting, explicit in this case
    cout << a << "\t" << int(a) << endl;

    //implicit type casting
    int b = a;

    cout << a << "\t" << b << endl; 

    char c;
    int d;

    d = 65;
    c = d;

    cout << d << "\t" << c << endl;

    int m = 32;

    while (m < 130) {
        char e;
        e = m;
        cout << m << "\t" << e << endl;
        m++;
    }

    // how to open file for input
    freopen("input.txt", "r", stdin);

    string str;

    getline(cin, str);

    cout << str << endl;

    // how to open file for output
    freopen("output.txt", "w", stdout);

    cout << pow(2, 8) << endl;

    double d = 2.99;
    
    cout << round(d) << endl;
    
    cout << ceil(d) << endl;
    
    cout << floor(d) << endl;

    return 0;
}