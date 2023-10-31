// non-functional algorithm
// this is not a solution for Lab 6, B
// becaues you NEED to use a FUNCTION
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];
    int b[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int d[n];

    for(int i = 0; i < n; i++) {
        d[i] = abs(a[i] - b[i]);
    }

    for(int i = 0; i < n; i++) {
        cout << d[i] << " ";
    }
    cout << endl;

    return 0;
}