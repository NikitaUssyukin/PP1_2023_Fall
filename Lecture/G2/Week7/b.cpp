#include <iostream>

using namespace std;

// // correct
// int arraySum(int a[], int n) {
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += a[i];
//         a[i] = 0;
//     }
//     return sum;
// }

// incorrect
int arraySum(int a[]) {
    int n = sizeof(a) / sizeof(a[0]);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        a[i] = 0;
    }
    return sum;
}

// one way to fix it
int arraySum(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        a[i] = 0;
    }
    return sum;
}

int main() {

    int n;
    cin >> n;

    int a[n];

    // // one way to fix it - calculate the
    // // size of the array in main function
    // // and then pass it as the parameter
    int n = sizeof(a) / sizeof(a[0]);
    int n = a.size();

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << arraySum(a, n) << endl;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}