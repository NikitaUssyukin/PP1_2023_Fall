#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int rng() {
    int n = rand() % 100 + 1;
    int cnt = 0;
    while((n > 1 && n <= 50) && cnt < 100) {
        int n = rand() % 100 + 1;
        ++cnt;
    }
    return n;
}

int main() {
    srand(time(0)); 

    cout << time(0) << endl;

    int n;
    cin >> n;

    vector<int> v(n);

    // for(int i = 0; i < v.size(); ++i) {
    //     v[i] = rng();
    // }

    generate(v.begin(), v.end(), rng);

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}