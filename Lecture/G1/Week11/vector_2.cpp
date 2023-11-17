#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    for(int i = 1; i <= 5; i++) {
        v.push_back(i);
    } // v = {1, 2, 3, 4, 5}

    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.insert(v.begin(), 9);
    // v = {9, 1, 2, 3, 4, 5}

    cout << v.front() << endl;
    cout << "Capacity after 1 insertion: " << v.capacity() << endl;
    cout << "Size after 1 insertion: " << v.size() << endl;
    
    v.insert(v.begin() + 2, 7);
    v.insert(v.end() - 2, 11);
    cout << "Capacity after 2 more insertions: " << v.capacity() << endl;
    cout << "Size after 2 more insertions: " << v.size() << endl;

    v.push_back(15);
    cout << "Capacity after push_back: " << v.capacity() << endl;
    cout << "Size after push_back: " << v.size() << endl;

    v.erase(v.begin() + 5, v.end());
    cout << "Capacity after erasing elements from 6th till the last: " << v.capacity() << endl;
    cout << "Size after erasing elements from 6th till the last: " << v.size() << endl;

    v.clear();
    // equivalent to v.erase(v.begin(), v.end())
    cout << "Capacity after clear: " << v.capacity() << endl;
    cout << "Size after clear: " << v.size() << endl;
    cout << "Is empty: " << v.empty() << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << v.back() << endl;
    v.pop_back();
    cout << "back() after pop_back: " << v.back() << endl;
    
    // v.pop_back();
    // v.capacity();

    return 0;
}