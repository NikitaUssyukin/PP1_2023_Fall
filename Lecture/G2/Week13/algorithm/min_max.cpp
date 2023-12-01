#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    cout << "\nMax element: " << *max_element(v.begin(), v.end());
    cout << ", Min element: " << *min_element(v.begin(), v.end()) << endl;

    return 0;
}
