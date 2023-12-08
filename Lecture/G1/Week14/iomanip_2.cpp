#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    long double d = 0.0000000123456789123456789123456789;

    cout << "d: " << d << endl;

    // http://ejudge.kz/reference/en/cpp/header/iomanip.html
    // http://ejudge.kz/reference/en/cpp/io/manip/setprecision.html

    cout << "\nd, setprecision(4): " << setprecision(4) << d << endl;

    cout << "\nd, setprecision(32): " << setprecision(32) << d << endl;

    return 0;
}