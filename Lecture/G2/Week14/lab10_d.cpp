#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int> v1, vector<int> v2) {
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < v1.size(); ++i) {
        sum1 += v1[i];
    }

    for(int i = 0; i < v2.size(); ++i) {
        sum2 += v2[i];
    }

    if(sum1 != sum2) return sum1 < sum2;

    if(v1.size() != v2.size()) return v1.size() < v2.size();

    for(int i = 0; i < v1.size(); ++i) {
        if(v1[i] != v2[i]) return v1[i] < v2[i];
    } 

    return false;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int> > v(n);

    for(int i = 0; i < n; ++i) {
        int m;
        cin >> m;

        for(int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        for(int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}