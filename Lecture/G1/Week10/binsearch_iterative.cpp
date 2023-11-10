#include <iostream>
#include <algorithm>

using namespace std;

// counter of comparisons
int count = 0;

bool linsearch(int a[], int n, int num) {
    for (int i = 0; i < n; i++) {
        if(num == a[i]) return true;
        ::count++;
    }
    return false;
}

bool binsearch(int a[], int n, int num) {
    int m = n / 2;
    int l = 0, r = n - 1;
    while(l <= r) {
        ::count++;
        if(num == a[m]) return true;
        if(num > a[m]) {
            l = m + 1;
            m = (l + r) / 2;
        } else {
            r = m - 1;
            m = (l + r) / 2;
        }
    }
    return false;
}

int main() {
    int num;
    cin >> num;

    // taking input from file
    // file contents get redirected into cin
    freopen("input.txt", "r", stdin); 

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    if(linsearch(a, n, num)) cout << "Yes" << endl;
    else cout << "No" << endl;

    cout << ::count << endl;

    return 0;
}