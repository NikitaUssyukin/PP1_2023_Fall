#include <iostream>
#include <cmath>

using namespace std;

int thousand = 1000;
double pi = 3.14;

int addAthousand(int a) {
    return a + thousand;
}

int add(int a, int b) {
    int c = a + b;
    return c;
}

int main() {

    int c = add(2, 3);

    double pi = M_PI;

    cout << c << endl;

    for(int i = 0; i < 10; i++){
        cout << i << endl;
    }

    cout << thousand << endl;

    cout << addAthousand(c) << endl;

    // accessing local variable first
    cout << pi << endl;

    // accessing global variable with the same identifier
    cout << ::pi << endl;

    return 0;
}