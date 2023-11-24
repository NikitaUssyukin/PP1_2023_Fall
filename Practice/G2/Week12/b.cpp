#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int> > vv;
    vector<int> v;

    for(int i = 1; i <= 10; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vv.push_back(v);

    for(int i = 0; i < vv.size(); i++) {
        vv.at(i);
        for(int j = 0; j < vv.at(i).size(); j++) {
            cout << vv.at(i).at(j) << " ";
        }
        cout << endl;
    }

    return 0;
}