#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cfloat>
#include <iomanip>

using namespace std;

long double num = 0.0;

long double square() {
    long double square = powl(num, num);
    num += 1.0;
    return square; 
}

int main() {
    int n;
    cin >> n;

    vector<long double> v(n + 1);

    generate(v.begin(), v.end(), square);

    for(int i = 0; i < v.size(); ++i) {
        cout << setprecision(20) << v.at(i) << " ";
    }
    cout << endl;

    LDBL_MAX; // 1.7976931348623157e+308L
    ULLONG_MAX; // 9223372036854775807LL*2ULL+1ULL

    return 0;
}