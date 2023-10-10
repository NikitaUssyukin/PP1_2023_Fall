#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int number;

    for (int i = 0; i < n; i++) {
        cin >> number;
        cout << (number % 2 == 0) << " ";
    }

    return 0;
}

