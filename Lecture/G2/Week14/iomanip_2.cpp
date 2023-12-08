#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double d = 0.000000123456789123456789123456789;
    
    cout << d << endl;

    // http://ejudge.kz/reference/en/cpp/header/iomanip.html
    // http://ejudge.kz/reference/en/cpp/io/manip/setprecision.html

    cout << setprecision(3) << d << endl;

    cout << setprecision(16) << d << endl;

    return 0;
}