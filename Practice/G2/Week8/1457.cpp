#include <iostream>

using namespace std;

int main() {

    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    int arr[n];

    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for(int i = 0; i < (b - a + 1) / 2; i++) {
        int temp = arr[(a - 1) + i];
        arr[(a - 1) + i] = arr[(b - 1) - i];
        arr[(b - 1) - i] = temp;
    }

    for(int i = 0; i < (d - c + 1) / 2; i++) {
        int temp = arr[(c - 1) + i];
        arr[(c - 1) + i] = arr[(d - 1) - i];
        arr[(d - 1) - i] = temp;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;

}