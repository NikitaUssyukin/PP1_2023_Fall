#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool oddCompare(int a, int b) {
    if(a % 2 == 0 && b % 2 != 0) return true;
    if(a % 2 != 0 && b % 2 == 0) return false;
    if(a % 2 == 0 && b % 2 == 0) return a > b;
    return a < b;
}

int main() {
    vector<int> v;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end(), oddCompare);

    for(int i = 0; i < n; i++) {
        cout << v.at(i) << " "; 
    }
    cout << endl;

    return 0;
}