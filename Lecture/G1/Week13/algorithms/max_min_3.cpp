#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_a = *max_element(a, a + n);
    int min_a = *min_element(a, a + n);

    cout << "\nmax_a: " << max_a << ", min_a: " << min_a << endl;

    return 0;
}
