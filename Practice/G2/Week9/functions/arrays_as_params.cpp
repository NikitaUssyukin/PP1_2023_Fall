#include <iostream>

using namespace std;

void changeArray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        a[i] += rand() % 6 + 1;
    }
}

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {
        a[i] = rand() % 6 + 1;
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    changeArray(a, n);
    
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}