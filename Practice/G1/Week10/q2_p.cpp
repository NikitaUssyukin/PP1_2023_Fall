#include <iostream>

using namespace std;

int main() {

    long long n;
    cin >> n;

    int sum = 0;
    int first_digit;

    while(n > 0) {
        first_digit = n % 10;
        sum += first_digit;
        n /= 10;
    }

    sum -= first_digit;

    if(first_digit == sum % 10) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}