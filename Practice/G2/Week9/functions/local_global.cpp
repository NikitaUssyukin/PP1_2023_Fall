#include <iostream>

using namespace std;

// global
int multiplier = 5;

int main() {

    int a = 4;
    // local
    int multiplier = 6;

    // using local multiplier
    cout << a * multiplier << endl;
    // using global multiplier
    cout << a * ::multiplier << endl;

    return 0;
}