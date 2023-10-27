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

    for(int i = 0; i < (b - a + 1) / 2; i++) {
        swap(arr[(a - 1) + i], arr[(b - 1) - i]);
    }

    for(int i = 0; i < (d - c + 1) / 2; i++) {
        swap(arr[(c - 1) + i], arr[(d - 1) - i]);
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;

}