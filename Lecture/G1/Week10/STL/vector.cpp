#include <iostream>
#include <vector>

using namespace std;

int main() {
    // int v[10];
    vector<int> v;

    cout << v.empty() << endl;

    for(int i = 1; i <= 10; i++) {
        v.push_back(i);
    }

    cout << "Number of elements: " << v.size() << endl;

    cout << "First element: " << v[0] << endl;
    cout << v.at(0) << endl;
    cout << v.front() << endl;
    cout << *v.begin() << endl;

    cout << "Last element: " << v[v.size() - 1] << endl;
    cout << v.at(v.size() - 1) << endl;
    cout << v.back() << endl;
    cout << *(v.end() - 1) << endl; 

    v.push_back(11);

    cout << "Number of elements after push_back: " << v.size() << endl;

    v.pop_back();

    cout << "Number of elements after pop_back: " << v.size() << endl;

    // v.insert(v.begin() + 5, 100);

    // v.clear();
    // v.erase(v.begin(), v.end());
    
    return 0;
}