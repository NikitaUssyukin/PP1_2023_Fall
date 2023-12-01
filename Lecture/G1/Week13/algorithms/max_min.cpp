#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int max_v = *max_element(v.begin(), v.end());
    int min_v = *min_element(v.begin(), v.end());

    cout << "\nmax_v: " << max_v << ", min_v: " << min_v << endl;

    return 0;
}
