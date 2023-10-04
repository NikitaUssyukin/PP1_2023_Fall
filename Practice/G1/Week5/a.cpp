// how to merge 2 arrays

#include <iostream>

using namespace std;

int main() {

    int n, m; // array sizes
    cin >> n; 
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> m; 
    int b[m];

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int c[n+m];

    for (int i = 0; i < n; i++) {
        c[i] = a[i];
    }

    for (int i = 0; i < m; i++) {
        c[i+n] = b[i];
    }

    for (int i = 0; i < n + m; i++) {
        printf("%i ", c[i]); 
    }

    cout << endl;
    
    return 0;
}