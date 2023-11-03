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

    int sum = calculateSum(a, 5);

    cout << sum << endl;

    return 0;
}