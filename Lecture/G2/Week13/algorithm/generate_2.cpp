#include <iostream>
#include <cstdlib>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int num = 1;

int sequence() {
    return num++;
}

// 1 2 3 4 5 

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    generate(v.begin(), v.end(), sequence);

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

