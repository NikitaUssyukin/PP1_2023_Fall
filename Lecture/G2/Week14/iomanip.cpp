#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    cout << M_PI << endl;

    // http://ejudge.kz/reference/en/cpp/header/iomanip.html
    // http://ejudge.kz/reference/en/cpp/io/manip/setprecision.html

    cout << setprecision(3) << M_PI << endl;

    cout << setprecision(16) << M_PI << endl;

    return 0;
}