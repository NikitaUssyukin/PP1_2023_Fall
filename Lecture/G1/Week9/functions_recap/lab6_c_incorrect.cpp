// exceeds time limit
#include <iostream>

using namespace std;

int countEquals(int n, int a[], int b[]) {
    int count = 0;

    /*
    6
    4 3 1 2 4 1
    3 1 1 5 4 4
    */

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i] == b[j]) {
                a[i] = -1;
                b[j] = -1;
                count++;
                break;
            }
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    int b[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    cout << countEquals(n, a, b) << endl;

    return 0;
}