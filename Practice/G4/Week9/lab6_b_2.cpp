#include <iostream>
#include <cmath>

using namespace std;

void arrayDifference(int a[], int b[], int d[], int n) {
    for(int i = 0; i < n; i++) {
        d[i] = abs(a[i] - b[i]);
    }
    for(int i = 0; i < n; i++) {
        cout << d[i] << " ";
    }
    cout << endl;
}

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
        cout << d[i] << " ";
    }
    cout << endl;

    arrayDifference(a, b, d, n);

    return 0;

}