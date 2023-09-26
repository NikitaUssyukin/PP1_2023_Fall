#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // i+=2 is the same as i = i + 2
    for (int i = 0; i < n; i+=2) {
        cout << a[i] << " ";
    }
    
    cout << endl;

    return 0;
}