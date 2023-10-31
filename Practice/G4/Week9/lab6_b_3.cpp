#include <iostream>
#include <cmath>

using namespace std;

void inputArray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void outputArray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void arrayDifference(int a[], int b[], int d[], int n) {
    for(int i = 0; i < n; i++) {
        d[i] = abs(a[i] - b[i]);
    }
}

int main() {

    int n;
    cin >> n;

    int a[n];
    int b[n];

    inputArray(a, n);
    inputArray(b, n);

    int d[n];

    arrayDifference(a, b, d, n);

    outputArray(d, n);

    return 0;

}