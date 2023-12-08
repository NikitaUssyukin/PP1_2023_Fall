#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        vector<int>::iterator it = find(v.begin(), v.end(), x);
        if(it == v.end()) v.push_back(x);
    } 

    do {
        for(int i = 0; i < v.size(); ++i) {
            cout << v[i] << " ";
        }
        cout << endl;
    } while(next_permutation(v.begin(), v.end()));

    return 0;
}