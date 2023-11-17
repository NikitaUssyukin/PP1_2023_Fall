#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;

    for(int i = 1; i <= 5; i++) {
        v.push_back(rand() % 100); // limiting random numbers range to 0 - 99
    } // 5 random integers

    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());

    for(it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    

    return 0;
}