#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int number;
    int sumOfDigits;

    for (int i = 0; i < n; i++) {
        cin >> number;
        sumOfDigits = 0;
        while (number > 0) {
            sumOfDigits += number % 10;
            number /= 10;
        }
        if (sumOfDigits % 2 == 0) {
            cout << "Sum of digits is even!" << endl;
        } else {
            cout << "Sum of digits is odd!" << endl;
        }
    }

    return 0;
}