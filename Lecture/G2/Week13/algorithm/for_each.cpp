#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void square(int& n) {
    n *= n;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    for_each(v.begin(), v.end(), square);

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
