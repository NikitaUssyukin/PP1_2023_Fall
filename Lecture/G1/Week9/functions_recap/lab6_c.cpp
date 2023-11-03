#include <iostream>
#include <algorithm>

using namespace std;

int countEquals(int n, int a[], int b[]) {
    sort(a, a + n);
    sort(b, b + n);

    int count = 0;

    /*
    6
    4 3 1 2 4 1
    3 1 1 5 4 4

    i
    1 1 2 3 4 4
    1 1 3 4 4 5
    j
    */

    int i = 0, j = 0;
    while(i < n && j < n) {
        if(a[i] == b[j]) {
            count++;
            i++;
            j++;
        }
        else if(a[i] < b[j]) i++;
        else j++;
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