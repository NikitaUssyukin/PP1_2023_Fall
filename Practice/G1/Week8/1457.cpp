#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    int arr[n + 1];

    for(int i = 1; i <= n; i++) {
        arr[i] = i;
    }

    for(int i = a; i <= (a + b) / 2; i++) {
        swap(arr[i], arr[a + b - i]);
    }

    for(int i = c; i <= (c + d) / 2; i++) {
        swap(arr[i], arr[c + d - i]);
    }

    for(int i = 1; i <= n; i++) {
       cout << arr[i] << " ";
    }

    cout << endl;

    return 0;

}