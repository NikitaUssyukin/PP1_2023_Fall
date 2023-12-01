#include <iostream>
#include <algorithm>

using namespace std;

bool isEven(int n) {
    if(n % 2 == 0) return true;
    return false;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << count_if(a, a + n, isEven) << endl;

    return 0;
}
