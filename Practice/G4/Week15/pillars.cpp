#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v1(n);

    for(int i = 0; i < v1.size(); ++i) {
        cin >> v1[i];
    }

    int m;
    cin >> m;

    vector<pair<int, int> > v2(m);

    for(int i = 0; i < v2.size(); ++i) {
        cin >> v2[i].first >> v2[i].second;
    }

    for(int i = 0; i < v2.size(); ++i) {
        int max_h = 0;
        int cnt = 0;
        for(int j = v2[i].first; j <= v2[i].second; ++j) {
            if(v1[j] > max_h) cnt++;
            max_h = max(max_h, v1[j]);
        }
        cout << cnt << endl;
    }

    return 0;
}

/*
7
5 2 3 7 9 8 11
4
0 6
1 5
2 6
3 4

4
4
4
2
*/