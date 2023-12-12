#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }

    int m;
    cin >> m;

    // freopen("output.txt", "w", stdout);

    for(int i = 0; i < m; ++i) {
        int max_h = 0;
        int cnt = 0;
        
        int l, r;
        cin >> l >> r;

        for(int j = l; j <= r; ++j) {
            if(v[j] > max_h) cnt++;
            max_h = max(max_h, v[j]);
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