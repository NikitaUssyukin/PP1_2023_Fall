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

    vector<int>::iterator max_it, min_it;
    max_it = max_element(v.begin(), v.end());
    min_it = min_element(v.begin(), v.end());

    cout << "\nMax element: " << *max_it;
    cout << ", Min element: " << *min_it << endl;

    return 0;
}
