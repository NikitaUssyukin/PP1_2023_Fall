#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num = 1;

int sequence() {
    return num++;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    // for(int i = 0; i < v.size(); ++i) {
    //     v[i] = sequence();
    // }

    // 1 2 3 4 5

    generate(v.begin(), v.end(), sequence);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}