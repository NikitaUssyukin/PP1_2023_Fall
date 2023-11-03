#include <iostream>

using namespace std;

int multiply(int a, int b) {
    a = a * b;
    return a;
}

int main() {

    int a, b;
    cin >> a >> b;

    cout << a << endl;
    multiply(a, b);
    // value of a doesn't change
    cout << a << endl;
    
    return 0;
}