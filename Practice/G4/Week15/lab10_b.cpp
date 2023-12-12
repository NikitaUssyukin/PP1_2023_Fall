#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int num = 0;

long long genPower() {
    long long power = powl(num, num);
    ++num;
    return power;
}

int main() {
    int n;
    cin >> n;

    vector<long long> v(n + 1);

    generate(v.begin(), v.end(), genPower);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}