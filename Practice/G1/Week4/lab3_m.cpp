#include <iostream>

using namespace std;

int main() {

    int a;
    int sum;

    cin >> sum;

    // cout << (1 < 2) << endl;

    while(cin >> a) {
        sum += a;
        // the same as "sum = sum + a"
    }

    cout << sum << endl;

    return 0;
}
