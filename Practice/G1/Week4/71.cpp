#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++){
        if (i < n-1) {
            cin >> a[i+1];
        }
        else {
            cin >> a[0];
        }
        
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}