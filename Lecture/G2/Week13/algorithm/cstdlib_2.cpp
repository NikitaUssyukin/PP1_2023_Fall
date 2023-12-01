#include <iostream>
#include <cstdlib>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;

    srand(time(0)); // chanding seed for the rand()

    vector<int> v(n);

    for(int i = 0; i < v.size(); i++) {
        v[i] = rand();
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

