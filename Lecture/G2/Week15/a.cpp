#include <iostream>
#include <vector>

using namespace std;

int main() {
    // to use this you need to add -std flag
    // Example: g++ -std=c++11 a.cpp
    vector<int> v = {1, 2, 3, 4, 5};

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}