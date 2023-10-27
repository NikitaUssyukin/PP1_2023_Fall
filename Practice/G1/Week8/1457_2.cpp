// not solved
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    int arr[n];

    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for(int i = a - 1; i < (a + b) / 2; i++) {
        swap(arr[i], arr[a + b - i]);
    }

    for(int i = c - 1; i < (c + d) / 2; i++) {
        swap(arr[i], arr[c + d - i]);
    }

    for(int i = 0; i < n; i++) {
       cout << arr[i] << " ";
    }

    cout << endl;

    return 0;

}