#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

long long num = 0;

long long powern() {
    long long square = powl(num, num);
    ++num;
    return square;
}

int main() {
    int n;
    cin >> n;

    vector <long long> v(n + 1);

    generate(v.begin(), v.end(), powern);

    for(auto num : v) {
        cout << num << " ";
    }

    return 0;
}