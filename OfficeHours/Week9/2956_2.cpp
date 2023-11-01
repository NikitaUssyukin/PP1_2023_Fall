#include <iostream>

using namespace std;

int main() {

    // 2002
    // 202
    // 0202

    int a, b, c, d, n;

    cin >> n;

    d = n % 10;

    c = n / 10 % 10;

    b = n / 100 % 10;

    a = n / 1000 % 10;

    cout << ((a == d) == (b == c)) << endl;

    return 0;
}