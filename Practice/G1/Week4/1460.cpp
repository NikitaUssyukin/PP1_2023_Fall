// THIS VARIANT IS NOT SOLVED COMPLETELY

#include <iostream>

using namespace std;

int main() {

    int n, k;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> k;

    for (int i = 0; i < n; i++){
        if (i < n-k) {
            a[i+k] = a[i];
        }
            while ()
            {
                /* code */
            }
            
            a[0] = a[i];
            a[1] = a[i+1];
            a[2] = a[i+2];
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}