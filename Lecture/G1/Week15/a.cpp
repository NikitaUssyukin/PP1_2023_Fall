#include <iostream>
#include <vector>

using namespace std;

int main() {
    // you need to add -std flag to compile this code
    // Example: g++ -std=c++11 b.cpp
    vector<int> v = {1, 2, 3, 4, 5};

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}