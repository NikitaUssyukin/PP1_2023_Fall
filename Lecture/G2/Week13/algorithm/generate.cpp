#include <iostream>
#include <cstdlib>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int rng() {
    int n = rand() % 100 + 1;
    int count = 0;
    while(count < 100) {
        int n = rand() % 100 + 1;
        if(n >= 50) return n;
        ++count;
    }
    return n;
}

int main() {
    int n;
    cin >> n;

    srand(time(0)); // chanding seed for the rand()

    vector<int> v(n);

    generate(v.begin(), v.end(), rng);

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

