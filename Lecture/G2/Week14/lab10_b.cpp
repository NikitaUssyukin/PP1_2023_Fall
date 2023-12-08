#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int num = -1;

long long sequence() {
    ++num;
    return powl(num, num);
}

int main() {
    int n;
    cin >> n;

    vector<long long> v(n + 1);

    generate(v.begin(), v.end(), sequence);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
// 437893890380859392
// 9223372036854775807 