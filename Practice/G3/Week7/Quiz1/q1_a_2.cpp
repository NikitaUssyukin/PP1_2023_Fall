#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    if (n > 1 && n % 2 == 0) cout << n / 2 << endl;
    else if (n > 1 && n % 2 != 0) cout << n << endl;
    else cout << 0 << endl;

    return 0;
}