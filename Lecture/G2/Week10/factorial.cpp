#include <iostream>
#include <climits>

using namespace std;

long long factorial(long long n) {
   if(n == 0 || n == 1) return 1;
   return n * factorial(n - 1);
}

long long factorialIterative(long long n) {
   int counter = 1;
   if(n == 0 || n == 1) return 1;
   for(int i = 1; i <= n; i++) {
    counter *= i;
   }
   return counter;
}

int main() {

    int n;
    cin >> n;

    cout << factorial(n) << endl;

    LLONG_MAX;
    // factorial(20) is 2432902008176640000
    // LLONG_MAX is 9223372036854775807

    // cout << factorialIterative(n) << endl;

    return 0;
}