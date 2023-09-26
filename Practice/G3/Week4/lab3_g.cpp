#include <iostream>

using namespace std;

int main(){

    int n, max, min;
    cin >> n;
    long int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    max = a[0];
    min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == max) a[i] = min;
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}