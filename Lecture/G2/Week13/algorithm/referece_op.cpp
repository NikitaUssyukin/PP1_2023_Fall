#include <iostream>

using namespace std;

void refSquare(int& n) {
    n *= n;
    cout << n << endl;
}

void square(int n) {
    n *= n;
    cout << n << endl;
}

int main() {
    int a;

    cin >> a;

    square(a);

    cout << a << endl;

    refSquare(a);

    cout << a << endl;

    return 0;
}