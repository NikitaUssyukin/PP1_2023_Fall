#include <iostream>

using namespace std;

int degree(int n, int m) {
    if(m == 0) return 1;
    return n * degree(n, m - 1);
}

int main() {
    int n, m;
    cin >> n >> m;
    
    cout << degree(n, m) << endl;

    return 0;
}