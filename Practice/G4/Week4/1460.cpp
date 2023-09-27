// INCOMPLETE SOLUTION

#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cin >> k;

    if (k > 0) {
        for (int i = n-k; i < n; i++) {
            cout << a[i] << " ";
        }

        for (int i = 0; i < n-k; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    else {
        for (int i = abs(k); i < n; i++){
            cout << a[i] << " ";
        } 
        for (int i = 0; i < abs(k); i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }

    

    return 0;
}