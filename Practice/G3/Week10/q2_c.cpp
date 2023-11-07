#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = n / 2 + n % 2; i < n; i++) {
        int reversed = 0;
        while(a[i] > 0) {
            reversed = a[i] % 10 + reversed * 10;
            a[i] /= 10;
        }
        a[i] = reversed;
    }

    // for(int i = 0; i < n; i++) {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    for(int i = 0; i < n / 2; i++) {
        if(a[i] != a[n - 1 - i]) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}