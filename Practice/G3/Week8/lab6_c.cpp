// NOT A SOLUTION
// EXCEEDS TIME LIMIT
#include <iostream>

using namespace std;

inline bool isInArray(int target, int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) return true;
    }
    return false;
}

inline void fillZeros(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = 0;
    }
}

inline int countEquals(int a[], int b[], int n) {
    int counter = 0;
    int c[n];
    int k = 0;

    for(int i = 0; i < n; i++) {
        if(isInArray(a[i], c, n)) continue;
        for(int j = 0; j < n; j++) {
            if(a[i] == b[j]) {
                c[k] = a[i];
                k++;
                counter++;
            }
        }
    }
    return counter;
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

    cout << countEquals(a, b, n) << endl;

    return 0;
}


