#include <iostream>

using namespace std;

int main() {

    // logical operators and conditional statements

    // logical: ||, &&, !

    bool a, b;

    a = true;
    b = false;

    cout << (a || b) << " " << (a && b) << " " << !a << " " << !b << endl;

    // conditional statements: if, else if, else
    if (!a && a) {
        cout << "This is our if block" << endl;
    }
    else if (!b) {
        cout << "This is our else if block" << endl;
    }
    else {
        cout << "This is our else block" << endl;
    }

    int n;

    cin >> n;

    if (n%2 == 0) {
        
        if (n > 100) {
            cout << "n is big and even" << endl;
        }
        else {
            cout << "n is small and even" << endl;
        }
        
    }
    else {
        if (n > 100) {
            cout << "n is big and odd" << endl;
        }
        else {
            cout << "n is small and odd" << endl;
        }
    }

    // pre-increment(decrement) and post-increment(decrement)

    int m;

    m = 15;

    cout << --m << endl;

    cout << m-- << endl;

    cout << m << endl;

    return 0;
}