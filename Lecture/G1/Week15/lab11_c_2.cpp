#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, double> p1, pair<string, double> p2) {
    if (p1.second == p2.second) return p1.first > p2.first;
    return p1.second > p2.second;
}

int main() {
    int n;
    cin >> n;

    map<string, int> m;
    int sum = 0;

    for(int i = 0; i < n; ++i) {
        string s;
        int x;
        cin >> s >> x;
        sum += x;
        m[s] += x;
    }

    vector<pair<string, double> > v;

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        pair<string, double> p;
        p.first = it->first;
        p.second = double(it->second) / double(sum) * 100;
        v.push_back(p);
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].first << " " << v[i].second << "%\n";
    }

    return 0;
}