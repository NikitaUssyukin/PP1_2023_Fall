#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    for(int i = 1; i <= 5; i++) {
        v.push_back(i);
    }

    cout << "Capacity after for loop: " << v.capacity() << endl;
    cout << "Size after for loop: " << v.size() << endl;

    for(int i = 6; i <= 10; i++) {
        v.push_back(i);
    }

    cout << "Capacity after another for loop: " << v.capacity() << endl;
    cout << "Size after another for loop: " << v.size() << endl;

    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}