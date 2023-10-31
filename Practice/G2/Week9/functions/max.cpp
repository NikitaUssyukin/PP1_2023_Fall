#include <iostream>

using namespace std;

int ourMax(int a, int b) {
    if(a > b) return a;
    else return b;
    //return a > b ? a : b;
}


int main() {

    int a, b;
    cin >> a >> b;

    cout << ourMax(a, b) << endl;

    return 0;
}