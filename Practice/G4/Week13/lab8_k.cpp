#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int k;
    cin >> k;

    sort(v.begin(), v.end());

    int sum = 0;
    for(int i = 1; i <= k; i++) {
        sum += v[n - i];
    }

    cout << sum << endl;

    return 0;
}