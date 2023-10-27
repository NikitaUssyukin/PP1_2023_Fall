#include <iostream>
#include <climits>

using namespace std;

unsigned long long factorial(int n) {
    if (n < 0) return -1;
    if (n < 2) return 1;
    return n * factorial(n - 1);
}

int main() {

    int n;
    cin >> n;
    
    cout << factorial(n) << endl;

    return 0;
}