#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int num = 0;

long long square() {
    long long square = powl(num, num);
    ++num; // pre-increment
    return square; 
}

int main() {
    int n;
    cin >> n;

    vector<long long> v(n + 1);

    generate(v.begin(), v.end(), square);

    for(int i = 0; i < v.size(); ++i) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}