#include <iostream>

using namespace std;

int main(){

    int n, counter = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i-1]) counter++;
    }

    cout << counter << endl;

    return 0;
}