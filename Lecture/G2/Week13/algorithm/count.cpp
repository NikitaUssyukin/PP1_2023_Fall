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

    cout << count(v.begin(), v.end(), 2) << endl;

    return 0;
}
