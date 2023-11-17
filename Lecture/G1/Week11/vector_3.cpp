#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;

    for(int i = 1; i <= 5; i++) {
        v.push_back(rand() % 100);
    } // 5 random integers

    for(int i = 0; i < 5; i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());

    for(int i = 0; i < 5; i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
    

    return 0;
}