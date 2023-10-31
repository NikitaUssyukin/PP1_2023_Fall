#include <iostream>

using namespace std;

int ourMax(int a, int b) {

    if(a > b) return a;
    else return b;
    //return a > b ? a : b;
    
}


int main() {

    char c, d;
    cin >> c >> d;

    cout << ourMax(c, d) << endl;
    // ourMax(int a = c, int b = d)

    // char f = 'a';
    // int g = f;
    // cout << g << endl;

    return 0;

}