#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int num;
    cin >> num;

    bool isFound = false;

    // one way to search
    for (int i = 0; i < n; i++) {
        if (a[i]==num) {
            cout << "YES" << endl;
            // isFound = true;
            break;
        }
        else if (i == n-1) cout << "NO" << endl;
        
    }

    // another way to search
    for (int i = 0; i < n; i++) {
        if (a[i]==num) {
            isFound = true;
            break;
        }
        
    }

    if (isFound) {
        cout << "YES" << endl;
    }

    return 0;
}