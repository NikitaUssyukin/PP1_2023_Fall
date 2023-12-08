#include <iostream>

using namespace std;

void sum(int a, int b) {
    a += b;
}

void ref_sum(int& a, int b) {
    a += b;
}

int main() {
    int a, b;
    cin >> a >> b;

    sum(a, b);
    cout << a << " " << b << endl;

    ref_sum(a, b);
    cout << a << " " << b << endl;

    return 0;
}