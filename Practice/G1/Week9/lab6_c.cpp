#include <iostream>
#include <algorithm>

using namespace std;

int countEquals(int a[], int b[], int n) {
    int counter = 0;

    sort(a, a + n);
    sort(b, b + n);

    int i = 0, j = 0;

    while(i < n && j < n) {
        if(a[i] == b[j]) {
            counter++;
            i++;
            j++;
        }
        else if(a[i] < b[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    return counter;
}

int countEqualsAlternative(int a[], int b[], int n) {
    int counter = 0;

    int numbers_in_a[101] = {};
    int numbers_in_b[101] = {};

    for(int i = 0; i < n; i++) {
        numbers_in_a[a[i]]++;
        numbers_in_b[b[i]]++;
    }

    for(int i = 0; i < 101; i++) {
        counter += min(numbers_in_a[i], numbers_in_b[i]);
    }

    // for(int i = 0; i < 6; i++) {
    //     cout << numbers_in_a[i] << " ";
    // }
    // cout << endl;

    // for(int i = 0; i < 6; i++) {
    //     cout << numbers_in_b[i] << " ";
    // }
    // cout << endl;

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

    cout << countEqualsAlternative(a, b, n) << endl;

    return 0;
}