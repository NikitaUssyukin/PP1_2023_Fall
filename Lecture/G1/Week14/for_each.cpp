#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void multiplyByTwo(int& n) {
    n *= 2;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    } 

    for_each(v.begin(), v.end(), multiplyByTwo);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    } 
    cout << endl;

    return 0;
}