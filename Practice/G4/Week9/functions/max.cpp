#include <iostream>

using namespace std;

int ourMax(int a, int b) {
    if(a < b) return b;
    else return a;
}

int main() {

    int a, b;
    a = 5;
    b = 7;

    cout << ourMax(a, b) << endl;

    return 0;
}