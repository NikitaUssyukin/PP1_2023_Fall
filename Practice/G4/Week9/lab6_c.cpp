/*
6                           i
4 3 1 2 4 1     1 1 2 3 4 4
3 1 1 5 4 4     1 1 3 4 4 5
5                         j

5
2 2 2 4 2
5 2 5 3 4
2

3           i
4 1 1     1 1 4
1 3 5     1 3 5
1           j



*/

#include <iostream>
#include <algorithm>

using namespace std;

void inputArray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int countEqualElements(int n, int a[], int b[]) {
    int counter = 0;
    
    sort(a, a + n);
    sort(b, b + n);

    int i = 0, j = 0;
    while(i < n && j < n) {
        if(a[i] < b[j]) i++;
        else if(a[i] > b[j]) j++;
        else {
            counter++;
            i++;
            j++;
        }
    }
    
    return counter;
}

int main() {

    int n;
    cin >> n;

    int a[n];
    int b[n];

    inputArray(a, n);
    inputArray(b, n);

    cout << countEqualElements(n, a, b) << endl;

    return 0;
}