#include <iostream>

using namespace std;

int main() {

    // 2002
    // 202 => 0202
    // 22 => 0022

    int a, b, c, d, n;

    cin >> n;

    d = n % 10;
    n /= 10;

    c = n % 10;
    n /= 10;

    b = n % 10;
    n /= 10;

    a = n % 10;
    n /= 10;

    cout << ((a == d) == (b == c)) << endl;

    return 0;
}