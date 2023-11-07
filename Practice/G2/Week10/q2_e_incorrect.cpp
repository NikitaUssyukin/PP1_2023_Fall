// incomplete solution
// doesn't take into account all cases
// !!!
#include <iostream>
#include <climits>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int firstMax, secondMax;
    firstMax = INT_MIN;
    secondMax = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(a[i] > firstMax) firstMax = a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[i] > secondMax && a[i] < firstMax) secondMax = a[i];
    }

    cout << firstMax * secondMax << endl;

    return 0;
}