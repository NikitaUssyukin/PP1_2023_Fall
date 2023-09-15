#include <iostream>
#include <cmath>

using namespace std;

// global constant variable
#define PI 3.14159265

int main() {

    int a = 2;

    cout << pow(a, 6) << endl;

    double b = 2.49;

    // less that .5 - rounds to the smaller number, otherwise to the larger one
    cout << round(b) << endl;

    cout << ceil(b) << "\t" << floor(b) << endl;

    cout << sin(b * PI / 180) << "\t" << cos(b) << endl;

    return 0;
}