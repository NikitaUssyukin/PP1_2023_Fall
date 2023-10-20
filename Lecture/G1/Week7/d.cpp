#include <iostream>

using namespace std;

int calculateSum(int a[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        a[i] = 0;
    }
    return sum;
}

int main() {

    int a[5] = {5, 9, 1, -3, 11};

    int n = sizeof(a)/sizeof(a[0]);

    cout << calculateSum(a, n) << endl;

    for(int i = 0; i < n; i++){
       cout << a[i] << endl;
    }

    return 0;
}