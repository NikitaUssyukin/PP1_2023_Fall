#include <iostream>

using namespace std;

int main() {

    int a = -10;
    int b = 0;

    bool c = false;

    if (a!=b || c) {
        cout << "Our variable a is " << a << endl;
    }
    else if (c) {
        cout << "This is else if block" << endl;
    }
    else {
        cout << "This is else block" << endl;
    }

    return 0;
}
