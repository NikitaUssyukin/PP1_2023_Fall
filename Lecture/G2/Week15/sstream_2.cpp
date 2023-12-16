#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void inputVector(vector<int>& v) {
    string s;
    getline(cin, s);

    // http://ejudge.kz/reference/en/cpp/io/basic_istringstream.html
    istringstream iss(s);

    int x;
    while(iss >> x) {
        v.push_back(x);
    }
}

int main() {
    vector<int> v1;

    inputVector(v1);

    for(int i = 0; i < v1.size(); ++i) {
        cout << v1[i] << " ";
    }
    cout << endl;

    vector<int> v2;

    inputVector(v2);

    for(int i = 0; i < v2.size(); ++i) {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}