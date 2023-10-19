#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    int root = sqrt(n);

    if(root * root == n) {
        cout << "Perfecto" << endl;
    } else {
        cout << "Simple" << endl;
    }

    return 0;
}