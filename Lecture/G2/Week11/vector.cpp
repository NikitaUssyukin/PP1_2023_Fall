#include <iostream>
#include <vector>

using namespace std;

int main() {
    // !!! to use this initialization 
    // you need to use additional flag:
    // g++ -std=c++17
    vector<int> v = {1, 2, 3, 4, 5};

    for(int i = 1; i <= 5; i++) {
        v.push_back(i);
    }

    v.insert(v.begin(), 15); // insert at the beginning
    v.insert(v.begin() + 3, 22); // insert at the 4th position
    v.insert(v.end() - 2, 99); // insert at the 3rd to last position

    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}