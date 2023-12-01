#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isEven(int n) {
    if(n % 2 == 0) return true;
    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    cout << count_if(v.begin(), v.end(), isEven) << endl;

    return 0;
}
