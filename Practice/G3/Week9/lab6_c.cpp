#include <iostream>

using namespace std;

int countEqualElements(int a[], int b[], int n) {
    int count = 0;
    
    int numbers_in_a[101] = {};
    int numbers_in_b[101] = {};

    /*
    Example:
    a[] = 1 1 1 3 5
    numbers_in_a[] = 0 3 0 1 0 1  
    */

    for(int i = 0; i < n; i++) {
        numbers_in_a[a[i]]++;
        numbers_in_b[b[i]]++;
    }

    for(int i = 1; i <= 100; i++){
        count += min(numbers_in_a[i], numbers_in_b[i]);
    }

    return count;
}

/*
numbers_in_a[] = 0 2 1 1 2 0
numbers_in_b[] = 0 2 0 1 2 1
By comparing each i-th elements of the arrays
and adding the smaller one to the count,
we get the number of equal elements.
*/

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

    cout << countEqualElements(a, b, n) << endl;

    return 0;

}