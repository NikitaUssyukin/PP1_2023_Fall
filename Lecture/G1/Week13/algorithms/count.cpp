#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(int n) {
    if (n > 3) return true;
    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int k;
    cin >> k;
    cout << count(v.begin(), v.end(), k) << endl;

    cout << count_if(v.begin(), v.end(), check) << endl;

    return 0;
}
