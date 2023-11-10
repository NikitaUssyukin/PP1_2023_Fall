#include <iostream>
#include <string>

using namespace std;

int main() {

    string s("Hello!");

    s.insert(5, ", Zhansaya");

    vector<int> v;
    v.insert(v.begin(), 5);

    cout << s << endl;

    cout << v.at(0) << endl;

    return 0;
}