#include <iostream>

using namespace std;

int ourMax(int a, int b) {
    if(a < b) return b;
    else return a;
}

int main() {

    double c, d;
    c = 4.5;
    d = 5.4;

    int e = c;
    
    cout << ourMax(c, d) << endl;
    // ourMax(int a = c, int b = d)




    return 0;
}