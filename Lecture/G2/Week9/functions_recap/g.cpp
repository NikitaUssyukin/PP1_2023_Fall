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

    int a[n];

    inputArray(a, n);

    outputArray(a, n);

    int m;
    cin >> m;

    int b[m];

    inputArray(b, m);

    outputArray(b, m);
    
    return 0;
}