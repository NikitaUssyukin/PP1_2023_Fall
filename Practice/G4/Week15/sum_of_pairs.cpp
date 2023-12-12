#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    int x;
    cin >> x;

    while(x != 0) {
        v.push_back(x);
        cin >> x;
    }

    int i = 0;
    int j = v.size() - 1;
    while(i <= j) {
        if(i == j) {
            cout << v[i] << " ";
            break;
        }
        cout << v[i] + v[j] << " ";
        ++i;
        --j;

    }
    cout << endl;

    return 0;
}

/*
1
2
3
1
2
3
0

4 4 4 
*/