// incomplete solution
#include <iostream>

using namespace std;

int countEquals(int n, int a[], int b[]) {

    int count = 0;

    int numbers_a[101] = {}; 
    int numbers_b[101] = {};
    // if we know the size of the array before compilation
    // as it is in this case
    // we can do "= {}" to fill the array with 0s

    /*
    6
    4 3 1 4 4 1
    3 1 1 5 4 4

    numbers_a[]: 0 2 1 1 3 0
    numbers_b[]: 0 2 0 1 2 1

    for(int i = 0; i < n; i++) {
        numbers_a[a[i]]++
        numbers_b[b[i]]++
    }
    

    */

    

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