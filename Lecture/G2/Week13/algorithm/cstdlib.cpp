#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int k;
    cin >> k;
    srand(k); // chanding seed for the rand()

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