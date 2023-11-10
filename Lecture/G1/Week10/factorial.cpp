#include <iostream>
#include <climits>

using namespace std;

long long factorial(long long n) {
    if(n == 1 || n == 0) return 1;
    return n * factorial(n - 1);
}

long long factorialIterative(long long n) {
    long long counter = 1;
    for(int i = 1; i <= n; i++) {
        counter *= i;
    }
    return counter;
}

int main() {

    int n;
    cin >> n;

    // LLONG_MAX;

    cout << factorial(n) << endl;

    // cout << factorialIterative(n) << endl;

    return 0;
}