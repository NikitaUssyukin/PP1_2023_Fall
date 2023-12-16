/*
1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 9 2
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    while(cin.peek() != '\n') {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}