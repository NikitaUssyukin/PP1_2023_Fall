#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v1(n);

    for(int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    int m;
    cin >> m;

    vector<int> v2(m);

    for(int i = 0; i < m; ++i) {
        cin >> v2[i];
    }

    set<int> s;

    for(int i = 0; i < v1.size(); ++i) {
        for(int j = i + 1; j < v1.size(); ++j) {
            s.insert(v1[i] + v1[j]);
        }
    }

    for(int i = 0; i < v2.size(); ++i) {
        if(s.find(v2[i]) != s.end()) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

/*
Input

9
1 1 7 7 8 10 10 10 8
6
8 18 30 20 1 16
Output

YES
YES
NO
YES
NO
YES
Input

5
1 19 37 19 35
4
38 70 20 39
Output

YES
NO
YES
NO
*/