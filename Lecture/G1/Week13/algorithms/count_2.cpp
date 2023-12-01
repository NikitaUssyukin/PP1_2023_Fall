#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countDividers(int n) {
    int count = 0;
    for(int i = 1; i <= n; ++i) {
        if(n % i == 0) ++count;
    }
    return count;
}

bool hasTwoDividers(int n) {
    if(countDividers(n) == 2) return true;
    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << count_if(v.begin(), v.end(), hasTwoDividers) << endl;

    return 0;
}
