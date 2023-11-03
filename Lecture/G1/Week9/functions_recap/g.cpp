#include <iostream>

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

int main() {

    int n;
    cin >> n;

    int arrA[n];

    inputArray(arrA, n);

    outputArray(arrA, n);

    int m;
    cin >> m;

    int arrB[m];

    inputArray(arrB, m);

    outputArray(arrB, m);

    return 0;
}