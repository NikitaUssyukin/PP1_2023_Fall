// https://www.w3resource.com/cpp-exercises/vector/index.php
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(vector<int> v) {
    sort(v.begin(), v.end());

    for(int i = 1; i < v.size(); i++) {
        if(v[i - 1] == v[i]) return false;
    }

    return true;
}

int main() {
    vector<int> v;

    int temp;

    while(cin >> temp) v.push_back(temp);

    if(check(v)) cout << "true\n";
    else cout << "false\n";

    return 0;
}