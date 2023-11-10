#include <iostream>

using namespace std;

int degree(int m, int n) {
    if(n == 0) return 1;
    return m * degree(m, n - 1);
}

int main() {
    int base, power;
    cin >> base >> power;

    cout << degree(base, power) << endl;

    return 0;
}