#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;

    for(int i = 1; i <= 10; i++) {
        v.push_back(i);
    }

    int currentSize = v.size();

    for(int i = 6; i < currentSize; i++) {
        cout << "i: " << i << ", element: " << v.back() << endl;
        v.pop_back();
    }
    cout << endl;

    cout << "Vector after deleting elements via pop_back(): \n";
    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    v.erase(v.begin() + 1, v.end() - 4);

    cout << "Vector after deleting elements with erase: \n";
    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    // deleting even elements:
    for(int i = 0; i < v.size(); i++) {
        if(v.at(i) % 2 == 0) v.erase(v.begin() + i);
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
    
    // deleting all elements
    v.clear();

    cout << "Is vector empty: " << v.empty() << endl;
    cout << "Size after clear: " << v.size() << endl;
    
    return 0;
}