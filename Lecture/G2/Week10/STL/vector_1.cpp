#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;

    cout << v.empty() << endl;
    cout << "Number of elements before for loop: " << v.size() << endl;

    for(int i = 1; i <= 10; i++) {
        v.push_back(i);
    }

    cout << "Number of elements after for loop: " << v.size() << endl;

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

    v.insert(v.begin() + 5, 100);
    v.insert(v.end() - 1, 101);

    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    cout << "Number of elements after insert: " << v.size() << endl;

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    cout << "Vector after sorting and reversing all the elements: \n";
    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
    
    return 0;
}