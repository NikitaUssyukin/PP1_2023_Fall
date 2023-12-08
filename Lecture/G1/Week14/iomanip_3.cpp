#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    long double d = 0.0000000123456789123456789123456789;

    // http://ejudge.kz/reference/en/cpp/io/manip/fixed.html

    cout << "d: " << fixed << d << endl;

    cout << "\nd, setprecision(4): " << setprecision(4) << fixed << d << endl;

    cout << "\nd, setprecision(32): " << setprecision(32) << fixed << d << endl;

    return 0;
}