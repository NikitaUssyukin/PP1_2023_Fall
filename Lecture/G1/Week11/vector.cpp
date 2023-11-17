#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    for(int i = 1; i <= 5; i++) {
        v.push_back(i);
    } // v = {1, 2, 3, 4, 5}

    cout << "Size: " << v.size();

    cout << "\nElement at the front: " << v.front() << endl;
    cout << v[0] << endl;
    cout << v.at(0) << endl;
    cout << *v.begin();

    cout << "\nElement at the back: " << v.back() << endl;
    cout << v[v.size() - 1] << endl;
    cout << v.at(v.size() - 1) << endl;
    cout << *(v.end() - 1);

    cout << "\nIs the array empty: " << v.empty() << endl;

    return 0;
}