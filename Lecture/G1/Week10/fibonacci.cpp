#include <iostream>

using namespace std;

int fibonacci(int n) {
    if(n == 0 || n == 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int fibonacciIterative(int n) {
    int a = 0, b = 1;
    if(n == 0) return 0;
    for(int i = 1; i < n; i++) {
        b += a;
        a = b - a;
    }
    return b;
}

int main() {

    int n;
    cin >> n;

    cout << fibonacci(n) << endl;

    cout << fibonacciIterative(n) << endl;

    return 0;
}